#include<stdio.h>
void DisplyFactor(int);
   int main ()
   
{  int iNo=0;


printf("Enter number\n");
scanf("%d",&iNo);

DisplyFactor(iNo);
	
	
	return 0;
}

void DisplyFactor(int iValue)
{
	int iCnt=0;
	if(iValue<0)
	{
		iValue=-iValue;
	}	
	
	for(iCnt=1;iCnt<=(iValue/2);iCnt++)
	{
		if((iValue%iCnt)==0)
		{
			printf("%d\n",iCnt);
		}
	
		
	}
}
















