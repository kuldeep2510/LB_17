#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;
bool ChekBit(UINT iNo,UINT iPos)
{
   UINT iMask=0x00000001;
    
    if((iPos<1)||(iPos>32))
   {
       return false;
   }
    iMask=iMask<<(iPos-1);
    if((iNo&iMask)==iMask)
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
   UINT iValue=0,iBit=0;
   bool bret=false;

   printf("Enter number\n");
   scanf("%d",&iValue);

   printf("Enter position\n");
   scanf("%d",&iBit);

  bret=ChekBit(iValue,iBit);
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