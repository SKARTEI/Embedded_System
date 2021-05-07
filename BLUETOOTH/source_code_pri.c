#include <mega128.h>
#include <delay.h> 

#define FUNCSET       0x28    // Function Set
#define ENTMODE       0x06    // Entry Mode Set
#define ALLCLR        0x01    // All Clear
#define DISPON        0x0c     // Display On
#define LINE2         0xC0    // 2nd Line Move

typedef unsigned char u_char;

u_char mode = 0, mod = 0;       // mode ���� ���� �� �ʱ�ȭ
u_char cnt = 0, cnt1 = 0;        // cnt ���� ���� �� �ʱ�ȭ
u_char sec = 0, sec1 = 0;        // sec ���� ���� �� �ʱ�ȭ
float  fval;           // ���ܼ� ���� fval ���� ����
int  ival;             // ���ܼ� ���� ival ���� ����

void LCD_init(void);             // LCD �Լ� ����
void LCD_String(char flash *);  
void Busy(void);
void Command(unsigned char);
void Data(unsigned char);

void DC_F();              // ��ֹ��� �������� ���Ͽ��� �� �����ϴ� �Լ� ����
void DC_B();              // ��ֹ��� �����Ͽ��� �� �����ϴ� �Լ� ����
  
void  AD_disp(int);         // A/D ��ȯ�� ǥ�� �Լ� ���� 

void main()               // �����Լ�
{
    int   ad_val;

    DDRA = 0xFF;
    DDRF = 0xF0;                 //PF4-PF7 ���, PF0-PF3 �Է�
    DDRC = 0xFF;
    TIMSK = 0x01;               // TOIE0 = 1(Ÿ/ī0 �����÷ο� ���ͷ�Ʈ �ο��̺�0
    TCCR0 = 0x07;               // �Ϲݸ��, 1024����
    TCNT0 = 0x00;               // Ÿ�̸�/ī����0 �������� �ʱⰪ
     
    ADMUX = 0b01000000;        // ADC0 �ܱؼ� �Է� ���� 
    ADCSRA = 0x87;            // ADEN=1, ADFR=1, ADSC=1, 16MHz  256���� -> 125kHz
           
    SREG=0x80;                //���� ���ͷ�Ʈ �ο��̺� I ��Ʈ ��  
        
    LCD_init();
    
    LCD_String("  CL ROBOT  ");    // ù��° ���ο� ���
    Command(LINE2);
    LCD_String(" NOW START  ");    // �ι�° ���ο� ���


    
    while(1){
             ADCSRA = 0xC7;                          // ADEN=1, ADSC = 1 ��ȯ ����
             while((ADCSRA & 0x10) == 0);            // ADIF=1�� �ɋ�����      
             ad_val = (int)ADCL + ((int)ADCH << 8);  // A/D�� �б�
             AD_disp(ad_val);                        // A/D ��ȯ�� ǥ��
                if(ival>=100){
                  DC_B();                        // ���ܼ� ������ ��ֹ� ������ ��, ????�� 13cm???
                             }                                
                else { 
                    DC_F();                      // ���ܼ� ������ ��ֹ��� �������� ������ ��   
                                   
                        }
    
            }

}


void AD_disp(int val)
{                
    fval = (float)val * 5.0 / 1023.0;       // ���а����� ��ȯ
    ival = (int)(fval  * 100.0 + 0.5);      // �ݿø� �� ����ȭ(�Ҽ� ��°�ڸ�����) 
}     



void DC_F()              // ���ܼ� ������ ��ֹ��� �������� ������ �� û�ҷκ� ����
{


    LCD_init();        // LCD �ʱ�ȭ
    
    LCD_String("    NOW    ");    // ù��° ���ο� ���
    Command(LINE2);
    LCD_String("  CLEANING  ");            // �ι�° ���ο� ���


 if(cnt1 >= 61){          // �ð��� ���� 16.384ms * 61 = 1��
                        cnt1 = 0;
                        sec1 = sec1 + 1;
                        if(sec1 == 2) {           //2�ʸ���    
                                      sec1 = 0;
                                      mod = (mod + 1) % 4; //���1, 2, 3,0  // ����, �ð����ȸ��, ����, �ݽð����ȸ�� �ݺ�
                                       
                                      if(mod==1) {
                                                    PORTA = 0b00000101; // û�ҷκ� 2�ʰ� ���� ����
                                                    PORTC = 0b11111100; // ���� ����� �Ͼ� LED ���� 
                                      }
                                      
                                      else if( mod==2) {
                                                    PORTA = 0b00001100; // û�ҷκ� 2�ʰ� �ð�������� ���鼭 û��
                                                    PORTC = 0b11111100; // ���� ����� �Ͼ� LED ����                                      
                                      }
                                      
                                      else if( mod==3) {
                                                    PORTA = 0b00000101; // û�ҷκ� 2�ʰ� ���� ����    
                                                    PORTC = 0b11111100; // ���� ����� �Ͼ� LED ����                                                                                                                                                            
                                      }
                                      
                                      else if( mod==0) {
                                                    PORTA = 0b00000011; // û�ҷκ� 2�ʰ� �ݽð�������� ���鼭 û��    
                                                    PORTC = 0b11111100; // ���� ����� �Ͼ� LED ����                                                                                                                                                           
                                      }
                                   
                                        
                                } 
                        }
}

void DC_B()              // ���ܼ� ������ ��ֹ� ������ ���� û�ҷκ� ����
{
    LCD_init();        // LCD �ʱ�ȭ
    
    LCD_String("   STOP    ");    // ù��° ���ο� ���
    Command(LINE2);
    LCD_String("  CLEANING  ");            // �ι�° ���ο� ���

if(cnt >= 61){          // �ð��� ���� 16.384ms * 61 = 1��
                        cnt = 0;
                        sec = sec + 1;
                        if(sec == 2) {           //2�ʸ���    
                                      sec = 0;
                                      mode = (mode + 1) % 2; //���1,0  // ����, �ð�������� ������ȯ
                                       
                                      if(mode==1) {
                                                    PORTA = 0b00001111; // û�ҷκ� 2�ʰ� ���� ����
                            PORTC = 0b11110011; // ��ֹ� �߰��ϰ� ���۽� ���� LED���� 
                                      }
                                      
                                      else if( mode==0) {
                                                    PORTA = 0b00001100; // û�ҷκ� 2�ʰ� �ð�������� ������ȯ
                            PORTC = 0b11110011; // ��ֹ� �߰��ϰ� ���۽� ���� LED����                              
                                      }
                                } 
            }
}

// LCD �ʱ�ȭ  
void LCD_init(void)
{       
    DDRD = 0xFF;            // ��Ʈ D ��� ����
    PORTD &= 0xFB;            //E = 0;
                  
    delay_ms(15);
    Command(0x20);
    delay_ms(5);
    Command(0x20);
    delay_us(100);
    Command(0x20);
    Command(FUNCSET);
    Command(DISPON);
    Command(ALLCLR);
    Command(ENTMODE);
}

// ���ڿ� ��� �Լ�
void LCD_String(char flash *str)
{
    char flash *pStr=0;
    
    pStr = str;    
    while(*pStr) Data(*pStr++);
}                                     

// �ν�Ʈ���� ���� �Լ�
void Command(unsigned char byte)
{
    Busy();

    // �ν�Ʈ���� ���� ����Ʈ
    PORTD = (byte & 0xF0);        // ������    
    PORTD &= 0xFE;            //RS = 0;           
    PORTD &= 0xFD;            //RW = 0;  
    delay_us(1);     
    PORTD |= 0x04;            //E = 1;
    delay_us(1);
    PORTD &= 0xFB;            //E = 0;

    // �ν�Ʈ���� ���� ����Ʈ
    PORTD = ((byte<<4) & 0xF0);    // ������
    PORTD &= 0xFE;            //RS = 0;
    PORTD &= 0xFD;            //RW = 0;
    delay_us(1);         
    PORTD |= 0x04;            //E = 1;
    delay_us(1);
    PORTD &= 0xFB;            //E = 0;
}
                    
//������ ���� �Լ�
void Data(unsigned char byte)
{
    Busy();
        
    // ������ ���� ����Ʈ
    PORTD = (byte & 0xF0);        // ������
    PORTD |= 0x01;            //RS = 1;
    PORTD &= 0xFD;            //RW = 0;
    delay_us(1);         
    PORTD |= 0x04;            //E = 1;
    delay_us(1);
    PORTD &= 0xFB;            //E = 0;

    // ������ ���� ����Ʈ
    PORTD = ((byte<<4) & 0xF0);      // ������
    PORTD |= 0x01;            //RS = 1;
    PORTD &= 0xFD;            //RW = 0;     
    delay_us(1);         
    PORTD |= 0x04;            //E = 1;
    delay_us(1);
    PORTD &= 0xFB;            //E = 0;
}

// Busy Flag Check -> �Ϲ����� BF�� üũ�ϴ� ���� �ƴ϶�
// ������ �ð� ������ �̿��Ѵ�.
void Busy(void)
{
    delay_ms(2);
}



// Ÿ�̸�/ī����0 �����÷ο� ���ͷ�Ʈ ó��, �ֱ� = 1/16 * 1024 * 256 = 16.384ms
interrupt [TIM0_OVF] void timer0_int(void) 
{
    TCNT0 = 0x0;            // Ÿ�̸�/ī����0 �ʱⰪ �缳��(��������)
    if(ival>=100) cnt++;                    // ���ͷ�Ʈ ȸ�� +1
    else cnt1++;
 }    