#include <mega128.h>
#include <delay.h>

void main(void)
{
    DDRC = 0xFF;
    PORTC = 0xFF;
    
    UCSR0A = 0x0;
    UCSR0B = 0b00001000; // �۽� �ο��̺� TXEN = 1
    UCSR0C = 0b00000110; // �񵿱�, ������ 8��Ʈ ���
    UBRR0H = 0; // X-TAL = 16MHz �϶�, BAUD = 9600
    UBRR0L = 103;
    
    while(1);
    
         
}