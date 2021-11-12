#include<stdio.h>
#include<stdbool.h>

bool CheakPalindrom(int);

int main()
{
    int iValue=0;
    bool bRet=false;
    printf("Enter number\n");
    scanf("%d",&iValue);

    bRet=CheakPalindrom(iValue);
    if(bRet==true)
    {
        printf("it is palindrom number\n");}
   
   else
   {
       printf("it is not palindrom number\n");
   }
    return 0;
}

bool CheakPalindrom(int iNo)

{
    int iDigit=0;
int iTemp=iNo;

    int iRev=0;

    while(iNo!=0)
    {
        iDigit=iNo%10;
        
        iRev=(iRev*10)+iDigit;

        iNo=iNo/10;
    }
if(iRev==iTemp)
{
    return true;
}
else
{
    return false;
}
}