#include <8051.h>


void main() 
{
unsigned int i;  
P0 = 0x38; 
P2 = 0x1; 
P2 = 0x0; 
P0 = 0x80; 
P2 = 0x1; 
P2 = 0x0;
P0 = 179;
//P2 = 160;
//P2 = 179;
//P2 = 160;
//P2 = 177;
for(i=0;i<1;i++) //pishem slovo v nachale 1 stroki
{
P0 = 179;
P2 = 0x3;
P2 = 0x2;
}
for(i=0;i<1;i++) //pishem slovo v nachale 1 stroki
{
P0 = 160;
P2 = 0x3;
P2 = 0x2;
}
for(i=0;i<1;i++) //pishem slovo v nachale 1 stroki
{
P0 = 179;
P2 = 0x3;
P2 = 0x2;
}
for(i=0;i<1;i++) //pishem slovo v nachale 1 stroki
{
P0 = 160;
P2 = 0x3;
P2 = 0x2;
}
for(i=0;i<1;i++) //pishem slovo v nachale 1 stroki
{
P0 = 177;
P2 = 0x3;
P2 = 0x2;
}
P0 = 0x80; 
P2 = 0x1; 
P2 = 0x0;
for(i=0;i<5;i++) // ydolyaem slovo
{
P0 = 0x1;
P2 = 0x3;
P2 = 0x2;
}
P0 = 0x80;
P2 = 0x1; 
P2 = 0x0;   
for(i=0;i<3;i++) //sdvig vpravo na 3
{
P0 = 0x6;
P2 = 0x3;
P2 = 0x2;
}
for(i=0;i<1;i++) //pishem slovo v konce1 stroki
{
P0 = 179;
P2 = 0x3;
P2 = 0x2;
}
for(i=0;i<1;i++) //pishem slovo v konce 1 stroki
{
P0 = 160;
P2 = 0x3;
P2 = 0x2;
}
for(i=0;i<1;i++) //pishem slovo v konce 1 stroki
{
P0 = 179;
P2 = 0x3;
P2 = 0x2;
}
for(i=0;i<1;i++) //pishem slovo v konce 1 stroki
{
P0 = 160;
P2 = 0x3;
P2 = 0x2;
}
for(i=0;i<1;i++) //pishem slovo v konce 1 stroki
{
P0 = 177;
P2 = 0x3;
P2 = 0x2;
}
P0 = 0x80;
P2 = 0x1; 
P2 = 0x0;
for(i=0;i<8;i++) // ydolyaem slovo
{
P0 = 0x1;
P2 = 0x3;
P2 = 0x2;
}
P0 = 0xC0; 
P2 = 0x1; 
P2 = 0x0;
for(i=0;i<1;i++) //pishem slovo v nachale 2 stroki
{
P0 = 179;
P2 = 0x3;
P2 = 0x2;
}
for(i=0;i<1;i++) //pishem slovo v nachale 2 stroki
{
P0 = 160;
P2 = 0x3;
P2 = 0x2;
}
for(i=0;i<1;i++) //pishem slovo v nachale 2 stroki
{
P0 = 179;
P2 = 0x3;
P2 = 0x2;
}
for(i=0;i<1;i++) //pishem slovo v nachale 2 stroki
{
P0 = 160;
P2 = 0x3;
P2 = 0x2;
}
for(i=0;i<1;i++) //pishem slovo v nachale 2 stroki
{
P0 = 177;
P2 = 0x3;
P2 = 0x2;
}
P0 = 0xC0; 
P2 = 0x1; 
P2 = 0x0;
for(i=0;i<5;i++) // ydolzem slovo v nachale 2 stroki
{
P0 = 0x1;
P2 = 0x3;
P2 = 0x2;
}
P0 = 0xC0;
P2 = 0x1; 
P2 = 0x0;
for(i=0;i<3;i++) //sdvig vpravo na 3
{
P0 = 0x6;
P2 = 0x3;
P2 = 0x2;
}
for(i=0;i<1;i++) //pishem slovo v konce 2 stroki
{
P0 = 179;
P2 = 0x3;
P2 = 0x2;
}
for(i=0;i<1;i++) //pishem slovo v konce 2 stroki
{
P0 = 160;
P2 = 0x3;
P2 = 0x2;
}
for(i=0;i<1;i++) //pishem slovo v konce 2 stroki
{
P0 = 179;
P2 = 0x3;
P2 = 0x2;
}
for(i=0;i<1;i++) //pishem slovo v konce 2 stroki
{
P0 = 160;
P2 = 0x3;
P2 = 0x2;
}
for(i=0;i<1;i++) //pishem slovo v konce 2 stroki
{
P0 = 177;
P2 = 0x3;
P2 = 0x2;
}
P0 = 0xC0;
P2 = 0x1; 
P2 = 0x0;
for(i=0;i<8;i++) //ydolyaem slovo v konce 2 stroki
{
P0 = 0x1;
P2 = 0x3;
P2 = 0x2;
}  
while(1);
}