#include<rg52.h>
#define LONG 50000
#define SHORT 10000

usesigned int table[] = { 0xc0, 0xf9, 0xa4, 0xb0, 0x99, 0x92, 0x82, 0xf8, 0x80, 0x90}; 

void delay(int i)
{
	while(i--)
	{
		
	}
}

void main()
{
	int i=0;
	while(1)
	{
		for(i =0; i<10; i++)
		{
			P0=table[i];
			delay (LONG);
		}
	}
}
