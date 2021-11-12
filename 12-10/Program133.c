#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;
bool ChekBit(UINT iNo)
{
   UINT iMask=0x00100000;// 0000 0000 0000
    
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
      printf("21th bit is ON\n");

  }
else
    {
    printf("21th bit is off\n");
    }
    return 0;

}