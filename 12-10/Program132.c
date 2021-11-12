#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;
bool ChekBit(UINT iNo)
{
   UINT iMask=0x00000008;
    
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
      printf("4th bit is ON\n");

  }
else
    {
    printf("4th bit is off\n");
    }
    return 0;

}