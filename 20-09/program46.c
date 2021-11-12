
//Input:5
//Output:*	*	*	*	*



#include<stdio.h>




void Display(char iNo)
{
	int iCnt=0;
	
	for(iCnt=1;iCnt<=iNo;iCnt++)
	{
		printf("*	");
	
	}
	
}
int main()
{
	char iValue=0;
	
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	Display(iValue);
	
	return 0;
	
}