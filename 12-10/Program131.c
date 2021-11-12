#include<stdio.h>
#include<stdbool.h>
bool ChekBit(int iNo)
{
    int iMask=0x00000008;
    
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
   int iValue=0;
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