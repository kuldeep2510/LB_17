#include<stdio.h>



void Display(int iValue)
{
	int i=0;
	if(iValue==0)
	{
		printf("you r enterd number is Zero");
	return ;
	}
	if(iValue<0)
	{
		iValue=-iValue;
	}
	
	for(i=1;i<=iValue;i++)
	{
		printf("%d\t",i);
	
	}
}
	int main()
{
	int iNo=0;
	printf("Enter number=");
	scanf("%d",&iNo);
	
	Display (iNo);
	return 0;
}