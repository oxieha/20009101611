#include<reg51.h>
#define TIME 1
void delaySec(unsigned char n);
void Movinglight();
unsigned char code MovinglightArray[] = {0xfe,0xfd,0xfb,0xf7,0xef,0xdf,0xbf,0x7f};
unsigned char i,n = 1;
int main()
{
	Movinglight();
	return 0;
}
void Movinglight()
{
	while(1)
	{
		for(i = 0;i < 8;i++)
			P1 = MovinglightArray[i];
			delaySec(TIME);
	}
}
void delaySec(unsigned char n)
{
	unsigned int i,j,l;
	for(l = 0;l < n;l++)
		for(i = 0;i < 1000;i++)
			for(j = 0;j < 114;j++);
