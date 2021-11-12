#include<stdio.h>
#include<stdbool.h>

bool Cheakperfect(int iNumber)
{
    int iSum=0;
   int iCnt=0;
    if(iNumber<0)
   
   
   {
       iNumber=-iNumber;
   }

for(iCnt=1;iCnt<=(iNumber/2);iCnt++)
if(iNumber%iCnt==0)
{
    iSum=iSum+iCnt;  

}
    {
        iNumber=-iNumber;
    }
    

    if(iSum==iNumber)
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
bool bRet = false;
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