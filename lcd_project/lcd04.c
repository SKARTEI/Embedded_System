// ���ϸ� : lcd04.c
// ��  �� : ���� ���� ����� ǥ���ϱ� 
// ��  �� : ��Ʈ�� ���� �����Ͽ� LCD�� ����Ѵ�.
//	    RS  - PD0
//	    R/W - PD1
//	    EN  - PD2
//          DB4  - PD4
//	    DB5  - PD5
//	    DB6  - PD6
//	    DB7  - PD7
             
#include <mega8515.h>        
#include <delay.h>

#define FUNCSET	0x28	// Function Set
#define ENTMODE	0x06	// Entry Mode Set
#define ALLCLR	0x01	// All Clear
#define DISPON	0x0c 	// Display On                       
#define LSHIFT	0x18	// Display Left Shift     
#define HOME	0x02	// Cursor Home

flash unsigned char cg_pat[24] =
            {0x1F, 0x04, 0x0A, 0x11, 0x04, 0x1F, 0x00, 0x00,   // '��'
             0x09, 0x17, 0x17, 0x09, 0x00, 0x06, 0x09, 0x06,   // '��'
             0x1F, 0x04, 0x0A, 0x11, 0x1F, 0x04, 0x10, 0x1F};  // '��'

void LCD_init(void);
void LCD_String(char flash *);
void Busy(void);
void Command(unsigned char);
void Data(unsigned char);

void main(void)
{                          
	int i;
	
	LCD_init();       
        
	// ù ��° ���ο� ���
    	for(i = 0;i < 24;i++){
    	 	Command(0x40 + i);
    	 	Data(cg_pat[i]);
    	}
    	
    	Command(HOME);
    	LCD_String(" My Name is ");
	Data(0x00);	// '��' �Ǵ� 0x08
	Data(0x01);	// '��' �Ǵ� 0x09
	Data(0x02);	// '��' �Ǵ� 0x0A
}

// LCD �ʱ�ȭ  
void LCD_init(void)
{       
	DDRD = 0xFF;			// ��Ʈ D ��� ����
	PORTD &= 0xFB;			// E = 0;
	              
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
