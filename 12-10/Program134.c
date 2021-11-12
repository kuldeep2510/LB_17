#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;
bool ChekBit(UINT iNo)
{
   UINT iMask=0x00000840;
    
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
      printf("12th and 7th bit is ON\n");

  }
else
    {
    printf("12th and 7th bit is off\n");
    }
    return 0;

}