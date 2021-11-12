#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;
bool ChekBit(UINT iNo,UINT iPos,UINT iPos2)
{
   UINT iMask1=0x00000008;
   UINT iMask2=0x00000080;
    if((iPos<1)||(iPos>32))
   {
       return false;
   }
  
    iMask1=iMask1<<(iPos-1); 
    iMask2=iMask2>>(iPos2-1);
    if(iNo&(iMask1||iMask2)==(iMask1||iMask2))
    {
        return true;
    }
    else
    {
        return false;
    }

}
int main()
{
   UINT iValue=0,iBit=0,iBit2=0;
   bool bret=false;

   printf("Enter number\n");
   scanf("%d",&iValue);

   printf("Enter position 1\n");
   scanf("%d",&iBit);

   printf("Enter position 2\n");
   scanf("%d",&iBit2);

  bret=ChekBit(iValue,iBit,iBit2);
  if(bret==true)
  {
      printf("Bit is ON\n");

  }
else
    {
    printf("Bit is Off\n");
    }
    return 0;

}