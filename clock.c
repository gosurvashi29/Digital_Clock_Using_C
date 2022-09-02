/*
 * _0to99_7seg.c
 *
 * Created: 06-08-2014 17:15:55
 *  Author: Urvashi
 */ 

# define F_CPU 1000000
# include <util/delay.h>
#include <avr/io.h>
int num(int s);
int main(void)
{
	int i,j,k,a,b,c,d,e,f,h1,h0,s1,s0,m1,m0;
	DDRD=255;
	DDRC=255;
    while(1)
    {
		for(h1=0;h1<=2;h1++)

{
	for(h0=0;h0<=9;h0++)
	{
		for(m1=0;m1<=5;m1++)
		{
		for(m0=0;m0<=9;m0++)
		{
			
		
		
	for(s1=0;s1<=5;s1++)
	{
		for(s0=0;s0<=9;s0++)
		{
			
		
	      for (k=0;k<=50;k++)
				{
					PORTD=0b00000001;
					PORTC=num(h1);
					_delay_ms(10);
					PORTD=0b00000010;
					PORTC=num(h0);
					_delay_ms(10);
					PORTD=0b00000100;
					PORTC=num(m1);
					_delay_ms(10);
					PORTD=0b00000100;
					PORTC=num(m0);
					_delay_ms(10);
					PORTD=0b00001000;
					PORTC=num(s1);
					_delay_ms(10);
					PORTD=0b00010000;
					PORTC=num(s0);
					_delay_ms(10);
					
					
					
				}
			}
        }
    }
}
	}
}
	}
}		
int num(int s)
{
	switch (s)
	{
	case 0:return(0b1000000) ;
		case 1:return(~0b0000110);
	case 2:return(~0b1011011) ;
	case 3:return(~0b1001111);
	case 4 :return(~0b1100110);
	case 5:return(~0b1101101);
	case 6:return(~0b1111101);
	case 7:return(~0b0000111);
	case 8:return(~0b1111111);
	case 9:return(~0b1100111);
	}
}