#include <mega128.h>

void Putch(char);

void main(void)
{
    // ���� ���ڿ� 
    char string[] = "this is atmega"
    char *pstr;
    
    // USART ����
    UCSR0A = 0b00000000;
    UCSR0B = 0b00001000; // �۽� �ο��̺� txen = 1
    UCSR0C = 0b00000110; // �񵿱�, ���۵����ʹ� 8��Ʈ�� ���� stop ��Ʈ 1��Ʈ , parity none
    
    UBRR0H = 0;
    UBRR0L = 103;       // baud : 9600
    
    pstr = string;
    while(*pstr != 0)
        Putch(*pstr++);
    
    while(1);
}
void Putch(char data)
{
    while(UCSR0A & 0x20 == 0x0) // UDRE0�� 1�� �ɶ� ����
        UDR0 = data;
}


//--------------------------------------------------------------------------

#include <mega128.h>

flash unsigned char seg_pat[16]= {0x3f, 0x06, 0x5b, 0x4f, 0x66, 0x6d, 0x7d, 0x07, 0x7f, 0x6f, 0x77, 0x7c, 0x39, 0x5e, 0x79, 0x71};

void main(void)
{
    unsigned char rd, dd = 0;
    
    DDRB = 0xFF;
    DDRF = 0xF0;
    
    PORTF = 0b11100000;     // ���� ������ segment on
    PORTB = seg_pat[dd];
    
    UCSR0A = 0x0;
    UCSR0B = 0b00010000;    //  ���� �ο��̺� rxen  = 1
    UCSR0C = 0b00000110;    // �񵿱� ������ 8 ��Ʈ ���
    
    UBRR0H = 0;
    UBRR0L = 103;
    
    while(1)
    {
        while(UCSR0A &0x80 == 0x0)    // RXC0 �� 1�� �ɶ� ���� ����Ѵ�.
            PORTB = seg_pat[dd];
    }        
    
    rd = UDR0;                      // ����                   
    
    if(rd >= '0' && rd<= '9')
        dd = rd - '0';
    else if(rd >= 'a' && rd<= 'f')
        dd = rd - 'a' +10;
    else if(rd >= 'A' && rd<= 'F')
        dd = rd - 'A' + 10; 
}

//---------------------------------------------------------------------------------

#include <mega128.h>
#include <delay.h>
#include <stdio.h>

flash unsigned char seg_pat[16]= {0x3f, 0x06, 0x5b, 0x4f, 0x66, 0x6d, 0x7d, 0x07, 0x7f, 0x6f, 0x77, 0x7c, 0x39, 0x5e, 0x79, 0x71};

void main(void)

// stdio.h �� sprintf�� ����� �� �ִ�.

    sprintf(buf, "i = &2d, seg_pat[%d] = 0x%02x%c", i, i , seg_pat[i]);
    