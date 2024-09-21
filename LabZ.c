/*
 * File:   LabZ.c
 * Author: Nathaniel Maxwell
 *
 * Created on September 20, 2024, 4:55 PM
 */


#include <xc.h>
#define _XTAL_FREQ 2000000

void main(void) 
{
    TRISB = 0;
    PORTBbits.RB0 = 1;
    
    while(1)
    {
        PORTBbits.RB6 = 1;
        __delay_ms(500);
        
        PORTBbits.RB6 = 0;
        __delay_ms(500);
    }
    return;
}


