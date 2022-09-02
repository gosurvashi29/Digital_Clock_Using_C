#define F_CPU 1000000
#include <avr/io.h>
#include <util/delay.h>
int num(int s);
int main(void)
{
	int i,j,k,a,b;
	DDRD=255;
	DDRC=255;
	while(1)
	{
		for (i=0,a=0;i<=9,a<=360;i++,a++)
		{
			
			for (j=0,b=0;j<=9,b<=60;j++,b++)
			{
				for (k=0;k<=50;k++)
				{
					PORTC=0b00000001;
					PORTD=num(i);
					_delay_ms(10);
					PORTC=0b00000010;
					PORTD=num(j);
					_delay_ms(10);
					
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