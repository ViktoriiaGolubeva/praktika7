#include <htc.h> // 78,58 540
unsigned int tmpCnt; 
void tmp()
{
if(P30=5) // Q 45
{
	tmpCnt = 2122; 
}
if(P00=5) // Q 70
{
	tmpCnt = 3520;
}
if(P30 == 0 && P00 == 0) // 3 Q
{
tmpCnt = 10;
}
}
void imp(unsigned int cnt)
{
	do{ }while(TF2==0);
	TF2 = 0;
	P10 = 1;
	while (cnt != 0)cnt--;P10 = 0;
}
void main()
{
	P1 = 0xFE; 
	RCAP2H = 41; //
	RCAP2L = 120; 
	T2CON &= 0xFC;
	ET2 = 1; 
	EA = 1; 
	T2CON |= 0x4; 
while(1)
{
	tmp();
	imp(tmpCnt);
} 
}