#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;
bool ChekBit(UINT iNo)
{
   UINT iMask=0x0000000F;
    
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
   UINT iValue=0;
   bool bret=false;

   printf("Enter number\n");
   scanf("%d",&iValue);

  bret=ChekBit(iValue);
  if(bret==true)
  {
      printf("1st 4 bits are ON\n");

  }
else
    {
    printf("1st 4 bits are not ON\n");
    }
    return 0;

}