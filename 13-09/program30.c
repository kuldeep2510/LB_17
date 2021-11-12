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
	
    int iDigit=0, iCnt=0;
	
	if(iNo<0)
	{
		iNo=-iNo;
	}
	while(iNo!=0)
	{
	iDigit=iNo%10; 
	iCnt++;
	iNo=iNo/10; 
	
	 
	 
	 }
	 return iCnt;
}