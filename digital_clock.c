#include<avr/io.h>
#include<util/delay.h>
int main()
{
 DDRA=0xFF;
 DDRB=0xFF;
 int l5,l4,l3,l2,l1,l0,i;
 int disp_num(int);
 for(l5=0;l5<=1;l5++)
 {
 for(l4=0;l4<=2;l4++)
 {
 for(l3=0;l3<=5;l3++)
 {
 for(l2=0;l2<=9;l2++)
 {
 for(l1=0;l1<=5;l1++)
 {
 for(l0=0;l0<=9;l0++)
 {
 for(i=1;i<=50;i++)
 {
  PORTA=0b11011111;
  PORTB=disp_num(l5);
  _delay_ms(1);
  PORTA=0b11101111;
  PORTB=disp_num(l4);
  _delay_ms(1);
  PORTA=0b11110111;
  PORTB=disp_num(l3);
  _delay_ms(1);
  PORTA=0b11111011;
  PORTB=disp_num(l2);
  _delay_ms(1);
  PORTA=0b11111101;
  PORTB=disp_num(l1);
  _delay_ms(1);
  PORTA=0b11111110;
  PORTB=disp_num(l0);
  _delay_ms(1);
  
}
}
}
}
}
}
}
return (0);
}
int disp_num(int num)
{
 switch (num)
 {
  case(0): return 0x3F;
  case(1): return 0x06;
  case(2): return 0x5B;
  case(3): return 0x4F;
  case(4): return 0x66;
  case(5): return 0x6D;
  case(6): return 0x7D;
  case(7): return 0x07;
  case(8): return 0x7F;
  case(9): return 0x6F;
 }
}
