// ���ϸ� : lcd01.c
// ��  �� : LCD�� ������ ���ڿ��� ����Ѵ�.
// ��  �� : ��Ʈ�� ���� �����Ͽ� LCD�� ����Ѵ�.
//	    RS  - PD0
//	    R/W - PD1
//	    EN  - PD2
//          DB4  - PD4
//	    DB5  - PD5
//	    DB6  - PD6
//	    DB7  - PD7

#include <mega128.h>        
#include <delay.h>

#define FUNCSET       0x28	// Function Set
#define ENTMODE	      0x06	// Entry Mode Set
#define ALLCLR        0x01	// All Clear
#define DISPON        0x0c 	// Display On
#define LINE2         0xC0	// 2nd Line Move

void LCD_init(void);
void LCD_String(char flash *);
void Busy(void);
void Command(unsigned char);
void Data(unsigned char);

void main(void)
{             
	LCD_init();
	
	LCD_String("Hello!! KUT-128");	// ù��° ���ο� ���
    	Command(LINE2);
    	LCD_String("Atmel ATmega128");	// �ι�° ���ο� ���
	
	while(1);
}

// LCD �ʱ�ȭ  
void LCD_init(void)
{       
	DDRD = 0xFF;			// ��Ʈ D ��� ����
	PORTD &= 0xFB;			//E = 0;
	              
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
	PORTD = (byte & 0xF0);		// ������	
	PORTD &= 0xFE;			//RS = 0;           
	PORTD &= 0xFD;			//RW = 0;  
	delay_us(1);     
	PORTD |= 0x04;			//E = 1;
	delay_us(1);
	PORTD &= 0xFB;			//E = 0;

	// �ν�Ʈ���� ���� ����Ʈ
        PORTD = ((byte<<4) & 0xF0);	// ������
	PORTD &= 0xFE;			//RS = 0;
	PORTD &= 0xFD;			//RW = 0;
	delay_us(1);     	
	PORTD |= 0x04;			//E = 1;
	delay_us(1);
	PORTD &= 0xFB;			//E = 0;
}
                    
//������ ���� �Լ�
void Data(unsigned char byte)
{
	Busy();
        
	// ������ ���� ����Ʈ
	PORTD = (byte & 0xF0);		// ������
	PORTD |= 0x01;			//RS = 1;
	PORTD &= 0xFD;			//RW = 0;
	delay_us(1);     	
	PORTD |= 0x04;			//E = 1;
	delay_us(1);
	PORTD &= 0xFB;			//E = 0;

	// ������ ���� ����Ʈ
	PORTD = ((byte<<4) & 0xF0);  	// ������
	PORTD |= 0x01;			//RS = 1;
	PORTD &= 0xFD;			//RW = 0;     
	delay_us(1);     	
	PORTD |= 0x04;			//E = 1;
	delay_us(1);
	PORTD &= 0xFB;			//E = 0;
}

// Busy Flag Check -> �Ϲ����� BF�� üũ�ϴ� ���� �ƴ϶�
// ������ �ð� ������ �̿��Ѵ�.
void Busy(void)
{
    delay_ms(2);
}
