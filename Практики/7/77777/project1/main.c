#include <htc.h>
unsigned int tmpCnt; 
void imp(unsigned int cnt)
{
do{ }while(TF2==0);
TF2 = 0;
P10 = 1;
while (cnt != 0)cnt--;
P10 = 0;
}
void main()
{
tmpCnt = 1000; 
P1 = 0xFE; 
RCAP2H = 0x0; 
RCAP2L = 0x0; 
T2CON &= 0xFC;
ET2 = 1; 
EA = 1; 
T2CON |= 0x4; 
while(1)
{
imp(tmpCnt);
}
}