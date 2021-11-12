#include<stdio.h>

//input:1
//output:1

//input:5
//output:120
unsigned long int Factorial(int); //Decleartion

	int main()
{
	int iNo=0;
	unsigned long int iRet=0;
	printf("Enter no=");
	scanf("%d",&iNo);
	
	iRet=Factorial(iNo);
	printf("Factorial is:%ld\n",iRet);
	

	return 0;
}
unsigned long int Factorial(int iValue)
{
	unsigned long int iFact=1;
	int iCnt=0;
	
	if(iValue<0)//updator
	{
		iValue=-iValue;
	}
	/*
	for(iCnt=1;iCnt<=iValue;iCnt++)
	{
		iFact=iFact*iCnt;
		
	}*/
	
	
	iCnt=1;              //1
	
	
	while(iCnt<=iValue)   //2
	{
		iFact=iFact*iCnt;   //4
		iCnt++;              //3
	}
	return iFact;
}