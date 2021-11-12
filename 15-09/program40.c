#include<stdio.h>
#include<stdbool.h>
int SumFact(int iNo)
{ 
   int iSum=0;
   int iCnt=0;
   if(iNo<0)
   {
       iNo=-iNo;
   }

for(iCnt=1;iCnt<=(iNo/2);iCnt++)
if(iNo%iCnt==0)
{
    iSum=iSum+iCnt;  

}

return iSum;
}
bool Cheakperfect(int iNumber)
{
    int iRet=0;
    if(iNumber<0)
    {
        iNumber=-iNumber;
    }
    iRet=SumFact(iNumber);

    if(iRet==iNumber)
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
int iValue = 0;
bool bRet = 0;
printf("Enter number");
scanf("%d",&iValue);
bRet = Cheakperfect(iValue);
if(bRet==true)
{
    printf("number is perfect\n");
}
else
{
    printf("number is not perfect\n");
}

return 0;
}