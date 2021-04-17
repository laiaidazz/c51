#include<reg52.h>
	int i=0;
sbit led0=P2^0;
sbit led1=P2^1;
sbit led2=P2^2;
sbit led3=P2^3;
sbit led4=P2^4;
sbit led5=P2^5;
sbit led6=P2^6;
sbit led7=P2^7;
void delay(int c)
{
	int a,b;
	for(a=0;a<c;a++)
	for(b=0;b<10;b++)
	{;}
}
void main(void)
{
	while(1){
	for(i=0;i<8;i++)
	{
	  led0=!led0;
		led1=!led1;
		led2=!led2;
		led3=!led3;
		led4=!led4;
		led5=!led5;
		led6=!led6;
		led7=!led7;
		delay(5000);
		
	}
	};
}