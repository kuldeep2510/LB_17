#include<stdio.h>

int Power(int,int);
int main()
{
    int iValue1=0;
    int iValue2=0;
    int iRet=0;

    printf("Enter First number \n");
    scanf("%d",&iValue1);

    printf("Enter second number \n");
    scanf("%d",&iValue2);

    iRet=Power(iValue1,iValue2);


    printf("result id %d\n",iRet);



   

    return 0;
}

int Power(int iNo1,int iNo2)
{ int iNumber=0;
  int iCnt=0;
  int iMult=1;
for(iCnt=1;iCnt<=iNo2;iCnt++)
iMult=iMult*iNo1;

  
printf("%d\n",iMult);


}