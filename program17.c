#include<stdio.h>




	int main()
{
	int iNo=0,iRet=0;
	printf("Enter no=");
	scanf("%d",&iNo);
	
	iRet=Addition(iNo);
	printf("Addition is:%d\n",iRet);
	

	return 0;
}
int Addition(int iValue)
{
	int iSum=0;
	int iCnt=0;
	
	for(iCnt=1;iCnt<=iValue;iCnt++)
	{
		iSum=iSum+iCnt;
		
	}
	return iSum;
}