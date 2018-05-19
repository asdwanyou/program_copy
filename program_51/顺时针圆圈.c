#include<reg52.h>
#define uint unsigned int 
#define uchar unsigned char
void delay(uint xms);
//uchar code table[]={0xc0,0xf9,0xa4,
 //                  0xb0,0x99,0x92,
  ///                 0x82,0xf8,0x80,0x90};
sbit P2_0=P2^0;
sbit P2_1=P2^1;
sbit P2_2=P2^2;
sbit P2_3=P2^3;
void main()
{
   while(1)
   {
      P0=0xDE;
      P2_0 = 0;
      delay(10000);
      P2_0 = 1;

      P0=0xFE;
      P2_1 = 0;
      delay(10000);
      P2_1 = 1;

      P0=0xFE;
      P2_2 = 0;
      delay(10000);
      P2_2 = 1;

      P0=0xFC;
      P2_3 = 0;
      delay(10000);//顺时针正半圈
      P2_3 = 1;

      P0=0xF3;
      P2_3 = 0;
      delay(10000);
      P2_3 = 1;

      P0=0x77;
      P2_2 = 0;
      delay(10000);
      P2_2 = 1;

      P0=0x77;
      P2_1 = 0;
      delay(10000);
      P2_1 = 1;

       P0=0xE7;
      P2_0 = 0;
      delay(10000);//顺时针负半圈
      P2_0 = 1;


      P0=0xBF;
      P2_0 = 0;
      delay(10000);//_______
      P2_0 = 1;


      P0=0xBF;
      P2_1 = 0;
      delay(10000);
      P2_1 = 1;


      P0=0xBF;
      P2_2 = 0;
      delay(10000);
      P2_2 = 1;


      P0=0xBF;
      P2_3 = 0;
      delay(10000);//_______
      P2_3 = 1;

      P0=0xFC;
      P2_3 = 0;
      delay(10000);//逆时针正半圈
      P2_3 = 1;

      P0=0xFE;
      P2_2 = 0;
      delay(10000);
      P2_2 = 1;

      P0=0xFE;
      P2_1 = 0;
      delay(10000);
      P2_1 = 1;

      P0=0xDE;
      P2_0 = 0;
      delay(10000);
      P2_0 = 1;


      P0=0xBF;
      P2_0 = 0;
      delay(10000);//_______
      P2_0 = 1;


      P0=0xBF;
      P2_1 = 0;
      delay(10000);
      P2_1 = 1;


      P0=0xBF;
      P2_2 = 0;
      delay(10000);
      P2_2 = 1;


      P0=0xBF;
      P2_3 = 0;
      delay(10000);//_______
      P2_3 = 1;

      P0=0xF3;
      P2_3 = 0;
      delay(10000);
      P2_3 = 1;

      P0=0x77;
      P2_2 = 0;
      delay(10000);
      P2_2 = 1;

      P0=0x77;
      P2_1 = 0;
      delay(10000);
      P2_1 = 1;

       P0=0xE7;
      P2_0 = 0;
      delay(10000);//顺时针负半圈
      P2_0 = 1;
 
   }
}
void delay(uint xms)
{
   uint i,j;
   for(i=xms;i>0;i--)
      for(j==110;j>0;j--);
}