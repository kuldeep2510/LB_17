#include<stdio.h>

int CountDigit( int);

int main()
{int iValue=0;
int iRet=0;
printf("Enter number\n");
scanf("%d",&iValue);
    
	
	iRet=CountDigit(iValue);
	printf("number of digit :%d\n",iRet);
	return 0;
}
int CountDigit( int iNo)
{
	
    int  iCnt=0;
	if(iNo==0)
	{
		return 1;
	}
	
	if(iNo<0)
	{
		iNo=-iNo;
	}
	while(iNo!=0)
	{
	 
	iCnt++;
	iNo=iNo/10; 
	
	 
	 
	 }
	 return iCnt;
}