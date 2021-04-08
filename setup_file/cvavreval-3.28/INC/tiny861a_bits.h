/*
CodeVisionAVR V2.0 C Compiler
(C) 1998-2012 Pavel Haiduc, HP InfoTech s.r.l.

ATtiny261A, ATtiny461A, ATtiny861A I/O REGISTERS BIT DEFINITIONS
*/

#ifndef __TINY861A_BITS_INCLUDED__
#define __TINY861A_BITS_INCLUDED__

/* ***** PORTA ************************ */
/* PORTA - Port A Data Register */
#define    PORTA0          0       // Port A Data Register bit 0
#define    PORTA1          1       // Port A Data Register bit 1
#define    PORTA2          2       // Port A Data Register bit 2
#define    PORTA3          3       // Port A Data Register bit 3
#define    PORTA4          4       // Port A Data Register bit 4
#define    PORTA5          5       // Port A Data Register bit 5
#define    PORTA6          6       // Port A Data Register bit 6
#define    PORTA7          7       // Port A Data Register bit 7

/* DDRA - Port A Data Direction Register */
#define    DDA0            0       // Data Direction Register, Port A, bit 0
#define    DDA1            1       // Data Direction Register, Port A, bit 1
#define    DDA2            2       // Data Direction Register, Port A, bit 2
#define    DDA3            3       // Data Direction Register, Port A, bit 3
#define    DDA4            4       // Data Direction Register, Port A, bit 4
#define    DDA5            5       // Data Direction Register, Port A, bit 5
#define    DDA6            6       // Data Direction Register, Port A, bit 6
#define    DDA7            7       // Data Direction Register, Port A, bit 7

/* PINA - Port A Input Pins */
#define    PINA0           0       // Input Pins, Port A bit 0
#define    PINA1           1       // Input Pins, Port A bit 1
#define    PINA2           2       // Input Pins, Port A bit 2
#define    PINA3           3       // Input Pins, Port A bit 3
#define    PINA4           4       // Input Pins, Port A bit 4
#define    PINA5           5       // Input Pins, Port A bit 5
#define    PINA6           6       // Input Pins, Port A bit 6
#define    PINA7           7       // Input Pins, Port A bit 7


/* ***** PORTB ************************ */
/* PORTB - Port B Data Register */
#define    PORTB0          0       // Port B Data Register bit 0
#define    PORTB1          1       // Port B Data Register bit 1
#define    PORTB2          2       // Port B Data Register bit 2
#define    PORTB3          3       // Port B Data Register bit 3
#define    PORTB4          4       // Port B Data Register bit 4
#define    PORTB5          5       // Port B Data Register bit 5
#define    PORTB6          6       // Port B Data Register bit 6
#define    PORTB7          7       // Port B Data Register bit 7

/* DDRB - Port B Data Direction Register */
#define    DDB0            0       // Port B Data Direction Register bit 0
#define    DDB1            1       // Port B Data Direction Register bit 1
#define    DDB2            2       // Port B Data Direction Register bit 2
#define    DDB3            3       // Port B Data Direction Register bit 3
#define    DDB4            4       // Port B Data Direction Register bit 4
#define    DDB5            5       // Port B Data Direction Register bit 5
#define    DDB6            6       // Port B Data Direction Register bit 6
#define    DDB7            7       // Port B Data Direction Register bit 7

/* PINB - Port B Input Pins */
#define    PINB0           0       // Port B Input Pins bit 0
#define    PINB1           1       // Port B Input Pins bit 1
#define    PINB2           2       // Port B Input Pins bit 2
#define    PINB3           3       // Port B Input Pins bit 3
#define    PINB4           4       // Port B Input Pins bit 4
#define    PINB5           5       // Port B Input Pins bit 5
#define    PINB6           6       // Port B Input Pins bit 6
#define    PINB7           7       // Port B Input Pins bit 7


/* ***** AD_CONVERTER ***************** */
/* ADMUX - The ADC multiplexer Selection Register */
#define    MUX0            0       // Analog Channel and Gain Selection Bits
#define    MUX1            1       // Analog Channel and Gain Selection Bits
#define    MUX2            2       // Analog Channel and Gain Selection Bits
#define    MUX3            3       // Analog Channel and Gain Selection Bits
#define    MUX4            4       // Analog Channel and Gain Selection Bits
#define    ADLAR           5       // Left Adjust Result
#define    REFS0           6       // Reference Selection Bit 0
#define    REFS1           7       // Reference Selection Bit 1

/* ADCSRA - The ADC Control and Status register */
#define    ADPS0           0       // ADC Prescaler Select Bits
#define    ADPS1           1       // ADC Prescaler Select Bits
#define    ADPS2           2       // ADC Prescaler Select Bits
#define    ADIE            3       // ADC Interrupt Enable
#define    ADIF            4       // ADC Interrupt Flag
#define    ADATE           5       // ADC Auto Trigger Enable
#define    ADSC            6       // ADC Start Conversion
#define    ADEN            7       // ADC Enable

/* ADCH - ADC Data Register High Byte */
#define    ADCH0           0       // ADC Data Register High Byte Bit 0
#define    ADCH1           1       // ADC Data Register High Byte Bit 1
#define    ADCH2           2       // ADC Data Register High Byte Bit 2
#define    ADCH3           3       // ADC Data Register High Byte Bit 3
#define    ADCH4           4       // ADC Data Register High Byte Bit 4
#define    ADCH5           5       // ADC Data Register High Byte Bit 5
#define    ADCH6           6       // ADC Data Register High Byte Bit 6
#define    ADCH7           7       // ADC Data Register High Byte Bit 7

/* ADCL - ADC Data Register Low Byte */
#define    ADCL0           0       // ADC Data Register Low Byte Bit 0
#define    ADCL1           1       // ADC Data Register Low Byte Bit 1
#define    ADCL2           2       // ADC Data Register Low Byte Bit 2
#define    ADCL3           3       // ADC Data Register Low Byte Bit 3
#define    ADCL4           4       // ADC Data Register Low Byte Bit 4
#define    ADCL5           5       // ADC Data Register Low Byte Bit 5
#define    ADCL6           6       // ADC Data Register Low Byte Bit 6
#define    ADCL7           7       // ADC Data Register Low Byte Bit 7

/* ADCSRB - ADC Control and Status Register B */
#define    ADTS0           0       // ADC Auto Trigger Source 0
#define    ADTS1           1       // ADC Auto Trigger Source 1
#define    ADTS2           2       // ADC Auto Trigger Source 2
#define    MUX5            3       // 
#define    REFS2           4       // 
#define    IPR             5       // Input Polarity Mode
#define    GSEL            6       // Gain Select
#define    BIN             7       // Bipolar Input Mode

/* DIDR0 - Digital Input Disable Register 0 */
#define    ADC0D           0       // ADC0 Digital input Disable
#define    ADC1D           1       // ADC1 Digital input Disable
#define    ADC2D           2       // ADC2 Digital input Disable
#define    AREFD           3       // AREF Digital Input Disable
#define    ADC3D           4       // ADC3 Digital input Disable
#define    ADC4D           5       // ADC4 Digital input Disable
#define    ADC5D           6       // ADC5 Digital input Disable
#define    ADC6D           7       // ADC6 Digital input Disable

/* DIDR1 - Digital Input Disable Register 1 */
#define    ADC7D           4       // ADC7 Digital input Disable
#define    ADC8D           5       // ADC8 Digital input Disable
#define    ADC9D           6       // ADC9 Digital input Disable
#define    ADC10D          7       // ADC10 Digital input Disable


/* ***** ANALOG_COMPARATOR ************ */
/* ACSRA - Analog Comparator Control And Status Register A */
#define    ACIS0           0       // Analog Comparator Interrupt Mode Select bit 0
#define    ACIS1           1       // Analog Comparator Interrupt Mode Select bit 1
#define    ACME            2       // Analog Comparator Multiplexer Enable
#define    ACIE            3       // Analog Comparator Interrupt Enable
#define    ACI             4       // Analog Comparator Interrupt Flag
#define    ACO             5       // Analog Compare Output
#define    ACBG            6       // Analog Comparator Bandgap Select
#define    ACD             7       // Analog Comparator Disable

/* ACSRB - Analog Comparator Control And Status Register B */
#define    ACM0            0       // Analog Comparator Multiplexer
#define    ACM1            1       // Analog Comparator Multiplexer
#define    ACM2            2       // Analog Comparator Multiplexer
#define    HLEV            6       // Hysteresis Level
#define    HSEL            7       // Hysteresis Select


/* ***** USI ************************** */
/* USIPP - USI Pin Position */
#define    USIPOS          0       // USI Pin Position

/* USIBR - USI Buffer Register */
#define    USIBR0          0       // USI Buffer Register bit 0
#define    USIBR1          1       // USI Buffer Register bit 1
#define    USIBR2          2       // USI Buffer Register bit 2
#define    USIBR3          3       // USI Buffer Register bit 3
#define    USIBR4          4       // USI Buffer Register bit 4
#define    USIBR5          5       // USI Buffer Register bit 5
#define    USIBR6          6       // USI Buffer Register bit 6
#define    USIBR7          7       // USI Buffer Register bit 7

/* USIDR - USI Data Register */
#define    USIDR0          0       // USI Data Register bit 0
#define    USIDR1          1       // USI Data Register bit 1
#define    USIDR2          2       // USI Data Register bit 2
#define    USIDR3          3       // USI Data Register bit 3
#define    USIDR4          4       // USI Data Register bit 4
#define    USIDR5          5       // USI Data Register bit 5
#define    USIDR6          6       // USI Data Register bit 6
#define    USIDR7          7       // USI Data Register bit 7

/* USISR - USI Status Register */
#define    USICNT0         0       // USI Counter Value Bit 0
#define    USICNT1         1       // USI Counter Value Bit 1
#define    USICNT2         2       // USI Counter Value Bit 2
#define    USICNT3         3       // USI Counter Value Bit 3
#define    USIDC           4       // Data Output Collision
#define    USIPF           5       // Stop Condition Flag
#define    USIOIF          6       // Counter Overflow Interrupt Flag
#define    USISIF          7       // Start Condition Interrupt Flag

/* USICR - USI Control Register */
#define    USITC           0       // Toggle Clock Port Pin
#define    USICLK          1       // Clock Strobe
#define    USICS0          2       // USI Clock Source Select Bit 0
#define    USICS1          3       // USI Clock Source Select Bit 1
#define    USIWM0          4       // USI Wire Mode Bit 0
#define    USIWM1          5       // USI Wire Mode Bit 1
#define    USIOIE          6       // Counter Overflow Interrupt Enable
#define    USISIE          7       // Start Condition Interrupt Enable


/* ***** EEPROM *********************** */
/* EEARL - EEPROM Address Register Low Byte */
#define    EEAR0           0       // EEPROM Read/Write Access Bit 0
#define    EEAR1           1       // EEPROM Read/Write Access Bit 1
#define    EEAR2           2       // EEPROM Read/Write Access Bit 2
#define    EEAR3           3       // EEPROM Read/Write Access Bit 3
#define    EEAR4           4       // EEPROM Read/Write Access Bit 4
#define    EEAR5           5       // EEPROM Read/Write Access Bit 5
#define    EEAR6           6       // EEPROM Read/Write Access Bit 6
#define    EEAR7           7       // EEPROM Read/Write Access Bit 7

/* EEARH - EEPROM Address Register High Byte */
#define    EEAR8           0       // EEPROM Read/Write Access Bit 0

/* EEDR - EEPROM Data Register */
#define    EEDR0           0       // EEPROM Data Register bit 0
#define    EEDR1           1       // EEPROM Data Register bit 1
#define    EEDR2           2       // EEPROM Data Register bit 2
#define    EEDR3           3       // EEPROM Data Register bit 3
#define    EEDR4           4       // EEPROM Data Register bit 4
#define    EEDR5           5       // EEPROM Data Register bit 5
#define    EEDR6           6       // EEPROM Data Register bit 6
#define    EEDR7           7       // EEPROM Data Register bit 7

/* EECR - EEPROM Control Register */
#define    EERE            0       // EEPROM Read Enable
#define    EEPE            1       // EEPROM Write Enable
#define    EEMPE           2       // EEPROM Master Write Enable
#define    EERIE           3       // EEPROM Ready Interrupt Enable
#define    EEPM0           4       // EEPROM Programming Mode Bit 0
#define    EEPM1           5       // EEPROM Programming Mode Bit 1


/* ***** WATCHDOG ********************* */
/* WDTCR - Watchdog Timer Control Register */
#define    WDTCSR          WDTCR   // For compatibility
#define    WDP0            0       // Watch Dog Timer Prescaler bit 0
#define    WDP1            1       // Watch Dog Timer Prescaler bit 1
#define    WDP2            2       // Watch Dog Timer Prescaler bit 2
#define    WDE             3       // Watch Dog Enable
#define    WDCE            4       // Watchdog Change Enable
#define    WDTOE           WDCE    // For compatibility
#define    WDP3            5       // Watchdog Timer Prescaler Bit 3
#define    WDIE            6       // Watchdog Timeout Interrupt Enable
#define    WDIF            7       // Watchdog Timeout Interrupt Flag


/* ***** TIMER_COUNTER_0 ************** */
/* TIMSK - Timer/Counter Interrupt Mask Register */
#define    TICIE0          0       // Timer/Counter0 Input Capture Interrupt Enable
#define    TOIE0           1       // Timer/Counter0 Overflow Interrupt Enable
#define    OCIE0B          3       // Timer/Counter0 Output Compare Match B Interrupt Enable
#define    OCIE0A          4       // Timer/Counter0 Output Compare Match A Interrupt Enable

/* TIFR - Timer/Counter0 Interrupt Flag register */
#define    ICF0            0       // Timer/Counter0 Input Capture Flag
#define    TOV0            1       // Timer/Counter0 Overflow Flag
#define    OCF0B           3       // Timer/Counter0 Output Compare Flag 0B
#define    OCF0A           4       // Timer/Counter0 Output Compare Flag 0A

/* TCCR0A - Timer/Counter  Control Register A */
#define    WGM00           0       // Waveform Generation Mode
#define    ACIC0           3       // Analog Comparator Input Capture Enable
#define    ICES0           4       // Input Capture Edge Select
#define    ICNC0           5       // Input Capture Noice Canceler
#define    ICEN0           6       // Input Capture Mode Enable
#define    TCW0            7       // Timer/Counter 0 Width

/* TCCR0B - Timer/Counter Control Register B */
#define    CS00            0       // Clock Select
#define    CS01            1       // Clock Select
#define    CS02            2       // Clock Select
#define    PSR0            3       // Timer/Counter 0 Prescaler Reset
#define    TSM             4       // Timer/Counter Synchronization Mode

/* TCNT0H - Timer/Counter0 High */
#define    TCNT0_0         0       // 
#define    TCNT0_1         1       // 
#define    TCNT0_2         2       // 
#define    TCNT0_3         3       // 
#define    TCNT0_4         4       // 
#define    TCNT0_5         5       // 
#define    TCNT0_6         6       // 
#define    TCNT0_7         7       // 

/* TCNT0L - Timer/Counter0 Low */
//#define  TCNT0_0         0       // 
//#define  TCNT0_1         1       // 
//#define  TCNT0_2         2       // 
//#define  TCNT0_3         3       // 
//#define  TCNT0_4         4       // 
//#define  TCNT0_5         5       // 
//#define  TCNT0_6         6       // 
//#define  TCNT0_7         7       // 

/* OCR0A - Timer/Counter0 Output Compare Register */
#define    OCR0_0          0       // 
#define    OCR0_1          1       // 
#define    OCR0_2          2       // 
#define    OCR0_3          3       // 
#define    OCR0_4          4       // 
#define    OCR0_5          5       // 
#define    OCR0_6          6       // 
#define    OCR0_7          7       // 

/* OCR0B - Timer/Counter0 Output Compare Register */
//#define  OCR0_0          0       // 
//#define  OCR0_1          1       // 
//#define  OCR0_2          2       // 
//#define  OCR0_3          3       // 
//#define  OCR0_4          4       // 
//#define  OCR0_5          5       // 
//#define  OCR0_6          6       // 
//#define  OCR0_7          7       // 


/* ***** TIMER_COUNTER_1 ************** */
/* TCCR1A - Timer/Counter Control Register A */
#define    PWM1B           0       // Pulse Width Modulator Enable
#define    PWM1A           1       // Pulse Width Modulator Enable
#define    FOC1B           2       // Force Output Compare Match 1B
#define    FOC1A           3       // Force Output Compare Match 1A
#define    COM1B0          4       // Compare Output Mode, Bit 0
#define    COM1B1          5       // Compare Output Mode, Bit 1
#define    COM1A0          6       // Compare Output Mode, Bit 1
#define    COM1A1          7       // Compare Output Mode, Bit 0

/* TCCR1B - Timer/Counter Control Register B */
#define    CS10            0       // Clock Select Bits
#define    CS11            1       // Clock Select Bits
#define    CS12            2       // Clock Select Bits
#define    CS13            3       // Clock Select Bits
#define    DTPS10          4       // Dead Time Prescaler
#define    DTPS11          5       // Dead Time Prescaler
#define    PSR1            6       // Timer/Counter 1 Prescaler reset
#define    PWM1X           7       // PWM Inversion Mode

/* TCCR1C - Timer/Counter Control Register C */
#define    PWM1D           0       // Pulse Width Modulator D Enable
#define    FOC1D           1       // Force Output Compare Match 1D
#define    COM1D0          2       // Comparator D output mode
#define    COM1D1          3       // Comparator D output mode
#define    COM1B0S         4       // COM1B0 Shadow Bit
#define    COM1B1S         5       // COM1B1 Shadow Bit
#define    COM1A0S         6       // COM1A0 Shadow Bit
#define    COM1A1S         7       // COM1A1 Shadow Bit

/* TCCR1D - Timer/Counter Control Register D */
#define    WGM10           0       // Waveform Generation Mode Bit
#define    WGM11           1       // Waveform Generation Mode Bit
#define    FPF1            2       // Fault Protection Interrupt Flag
#define    FPAC1           3       // Fault Protection Analog Comparator Enable
#define    FPES1           4       // Fault Protection Edge Select
#define    FPNC1           5       // Fault Protection Noise Canceler
#define    FPEN1           6       // Fault Protection Mode Enable
#define    FPIE1           7       // Fault Protection Interrupt Enable

/* TCCR1E - Timer/Counter1 Control Register E */
#define    OC1OE0          0       // Ouput Compare Override Enable Bit 0
#define    OC1OE1          1       // Ouput Compare Override Enable Bit 1
#define    OC1OE2          2       // Ouput Compare Override Enable Bit 2
#define    OC1OE3          3       // Ouput Compare Override Enable Bit 3
#define    OC1OE4          4       // Ouput Compare Override Enable Bit 4
#define    OC1OE5          5       // Ouput Compare Override Enable Bit 5

/* TCNT1 - Timer/Counter Register */
#define    TC1H_0          0       // Timer/Counter Register Bit 0
#define    TC1H_1          1       // Timer/Counter Register Bit 1
#define    TC1H_2          2       // Timer/Counter Register Bit 2
#define    TC1H_3          3       // Timer/Counter Register Bit 3
#define    TC1H_4          4       // Timer/Counter Register Bit 4
#define    TC1H_5          5       // Timer/Counter Register Bit 5
#define    TC1H_6          6       // Timer/Counter Register Bit 6
#define    TC1H_7          7       // Timer/Counter Register Bit 7

/* TC1H - Timer/Counter 1 Register High */
#define    TC18            0       // Timer/Counter Register Bit 0
#define    TC19            1       // Timer/Counter Register Bit 1

/* OCR1A - Output Compare Register */
#define    OCR1A0          0       // Output Compare Register A Bit 0
#define    OCR1A1          1       // Output Compare Register A Bit 1
#define    OCR1A2          2       // Output Compare Register A Bit 2
#define    OCR1A3          3       // Output Compare Register A Bit 3
#define    OCR1A4          4       // Output Compare Register A Bit 4
#define    OCR1A5          5       // Output Compare Register A Bit 5
#define    OCR1A6          6       // Output Compare Register A Bit 6
#define    OCR1A7          7       // Output Compare Register A Bit 7

/* OCR1B - Output Compare Register */
#define    OCR1B0          0       // Output Compare Register B Bit 0
#define    OCR1B1          1       // Output Compare Register B Bit 1
#define    OCR1B2          2       // Output Compare Register B Bit 2
#define    OCR1B3          3       // Output Compare Register B Bit 3
#define    OCR1B4          4       // Output Compare Register B Bit 4
#define    OCR1B5          5       // Output Compare Register B Bit 5
#define    OCR1B6          6       // Output Compare Register B Bit 6
#define    OCR1B7          7       // Output Compare Register B Bit 7

/* OCR1C - Output compare register */
#define    OCR1C0          0       // 
#define    OCR1C1          1       // 
#define    OCR1C2          2       // 
#define    OCR1C3          3       // 
#define    OCR1C4          4       // 
#define    OCR1C5          5       // 
#define    OCR1C6          6       // 
#define    OCR1C7          7       // 

/* OCR1D - Output compare register */
#define    OCR1D0          0       // 
#define    OCR1D1          1       // 
#define    OCR1D2          2       // 
#define    OCR1D3          3       // 
#define    OCR1D4          4       // 
#define    OCR1D5          5       // 
#define    OCR1D6          6       // 
//#define  OCR1C7          7       // 

/* TIMSK - Timer/Counter Interrupt Mask Register */
#define    TOIE1           2       // Timer/Counter1 Overflow Interrupt Enable
#define    OCIE1B          5       // OCIE1A: Timer/Counter1 Output Compare B Interrupt Enable
#define    OCIE1A          6       // OCIE1A: Timer/Counter1 Output Compare Interrupt Enable
#define    OCIE1D          7       // OCIE1D: Timer/Counter1 Output Compare Interrupt Enable

/* TIFR - Timer/Counter Interrupt Flag Register */
#define    TOV1            2       // Timer/Counter1 Overflow Flag
#define    OCF1B           5       // Timer/Counter1 Output Compare Flag 1B
#define    OCF1A           6       // Timer/Counter1 Output Compare Flag 1A
#define    OCF1D           7       // Timer/Counter1 Output Compare Flag 1D

/* DT1 - Timer/Counter 1 Dead Time Value */
#define    DT1L0           0       // 
#define    DT1L1           1       // 
#define    DT1L2           2       // 
#define    DT1L3           3       // 
#define    DT1H0           4       // 
#define    DT1H1           5       // 
#define    DT1H2           6       // 
#define    DT1H3           7       // 


/* ***** BOOT_LOAD ******************** */
/* SPMCSR - Store Program Memory Control Register */
#define    SPMEN           0       // Store Program Memory Enable
#define    PGERS           1       // Page Erase
#define    PGWRT           2       // Page Write
#define    RFLB            3       // Read fuse and lock bits
#define    CTPB            4       // Clear temporary page buffer


/* ***** EXTERNAL_INTERRUPT *********** */
/* MCUCR - MCU Control Register */
#define    ISC00           0       // Interrupt Sense Control 0 Bit 0
#define    ISC01           1       // Interrupt Sense Control 0 Bit 1

/* GIMSK - General Interrupt Mask Register */
#define    GICR            GIMSK   // For compatibility
#define    PCIE0           4       // Pin Change Interrupt Enable 0
#define    PCIE1           5       // Pin Change Interrupt Enable 1
#define    INT0            6       // External Interrupt Request 0 Enable
#define    INT1            7       // External Interrupt Request 1 Enable

/* GIFR - General Interrupt Flag register */
#define    PCIF            5       // Pin Change Interrupt Flag
#define    INTF0           6       // External Interrupt Flag 0
#define    INTF1           7       // External Interrupt Flag 1

/* PCMSK0 - Pin Change Enable Mask 0 */
#define    PCINT0          0       // Pin Change Enable Mask Bit 0
#define    PCINT1          1       // Pin Change Enable Mask Bit 1
#define    PCINT2          2       // Pin Change Enable Mask Bit 2
#define    PCINT3          3       // Pin Change Enable Mask Bit 3
#define    PCINT4          4       // Pin Change Enable Mask Bit 4
#define    PCINT5          5       // Pin Change Enable Mask Bit 5
#define    PCINT6          6       // Pin Change Enable Mask Bit 6
#define    PCINT7          7       // Pin Change Enable Mask Bit 7

/* PCMSK1 - Pin Change Enable Mask 1 */
#define    PCINT8          0       // Pin Change Enable Mask Bit 8
#define    PCINT9          1       // Pin Change Enable Mask Bit 9
#define    PCINT10         2       // Pin Change Enable Mask Bit 10
#define    PCINT11         3       // Pin Change Enable Mask Bit 11
#define    PCINT12         4       // Pin Change Enable Mask Bit 12
#define    PCINT13         5       // Pin Change Enable Mask Bit 13
#define    PCINT14         6       // Pin Change Enable Mask Bit 14
#define    PCINT15         7       // Pin Change Enable Mask Bit 15


/* ***** CPU ************************** */
/* SREG - Status Register */
#define    SREG_C          0       // Carry Flag
#define    SREG_Z          1       // Zero Flag
#define    SREG_N          2       // Negative Flag
#define    SREG_V          3       // Two's Complement Overflow Flag
#define    SREG_S          4       // Sign Bit
#define    SREG_H          5       // Half Carry Flag
#define    SREG_T          6       // Bit Copy Storage
#define    SREG_I          7       // Global Interrupt Enable

/* MCUCR - MCU Control Register */
//#define  ISC00           0       // Interrupt Sense Control 0 bit 0
//#define  ISC01           1       // Interrupt Sense Control 0 bit 1
#define    BODSE           2       // BOD Sleep Enable
#define    SM0             3       // Sleep Mode Select Bit 0
#define    SM1             4       // Sleep Mode Select Bit 1
#define    SE              5       // Sleep Enable
#define    PUD             6       // Pull-up Disable
#define    BODS            7       // BOD Sleep

/* MCUSR - MCU Status register */
#define    PORF            0       // Power-On Reset Flag
#define    EXTRF           1       // External Reset Flag
#define    BORF            2       // Brown-out Reset Flag
#define    WDRF            3       // Watchdog Reset Flag

/* PRR - Power Reduction Register */
#define    PRADC           0       // Power Reduction ADC
#define    PRUSI           1       // Power Reduction USI
#define    PRTIM0          2       // Power Reduction Timer/Counter0
#define    PRTIM1          3       // Power Reduction Timer/Counter1

/* OSCCAL - Oscillator Calibration Register */
#define    CAL0            0       // Oscillator Calibration Value Bit 0
#define    CAL1            1       // Oscillator Calibration Value Bit 1
#define    CAL2            2       // Oscillator Calibration Value Bit 2
#define    CAL3            3       // Oscillator Calibration Value Bit 3
#define    CAL4            4       // Oscillator Calibration Value Bit 4
#define    CAL5            5       // Oscillator Calibration Value Bit 5
#define    CAL6            6       // Oscillator Calibration Value Bit 6
#define    CAL7            7       // Oscillator Calibration Value Bit 7

/* PLLCSR - PLL Control and status register */
#define    PLOCK           0       // PLL Lock detector
#define    PLLE            1       // PLL Enable
#define    PCKE            2       // PCK Enable
#define    LSM             7       // Low speed mode

/* CLKPR - Clock Prescale Register */
#define    CLKPS0          0       // Clock Prescaler Select Bit 0
#define    CLKPS1          1       // Clock Prescaler Select Bit 1
#define    CLKPS2          2       // Clock Prescaler Select Bit 2
#define    CLKPS3          3       // Clock Prescaler Select Bit 3
#define    CLKPCE          7       // Clock Prescaler Change Enable

/* DWDR - debugWire data register */
#define    DWDR0           0       // 
#define    DWDR1           1       // 
#define    DWDR2           2       // 
#define    DWDR3           3       // 
#define    DWDR4           4       // 
#define    DWDR5           5       // 
#define    DWDR6           6       // 
#define    DWDR7           7       // 

/* GPIOR2 - General Purpose IO register 2 */
#define    GPIOR20         0       // 
#define    GPIOR21         1       // 
#define    GPIOR22         2       // 
#define    GPIOR23         3       // 
#define    GPIOR24         4       // 
#define    GPIOR25         5       // 
#define    GPIOR26         6       // 
#define    GPIOR27         7       // 

/* GPIOR1 - General Purpose register 1 */
#define    GPIOR10         0       // 
#define    GPIOR11         1       // 
#define    GPIOR12         2       // 
#define    GPIOR13         3       // 
#define    GPIOR14         4       // 
#define    GPIOR15         5       // 
#define    GPIOR16         6       // 
#define    GPIOR17         7       // 

/* GPIOR0 - General purpose register 0 */
#define    GPIOR00         0       // 
#define    GPIOR01         1       // 
#define    GPIOR02         2       // 
#define    GPIOR03         3       // 
#define    GPIOR04         4       // 
#define    GPIOR05         5       // 
#define    GPIOR06         6       // 
#define    GPIOR07         7       // 

#endif
