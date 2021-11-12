#include<stdio.h>
#include<stdbool.h>
bool CheakEven(int);
int main()

{
	int iNo=0;
	bool bRet=false;
	printf("Enter number\n");
	scanf("%d",&iNo);
	
	bRet=CheakEven(iNo);
	if(bRet==true)
	{

   printf("%d is even number\n",iNo);
   }
   else
   {
	   printf("%d is not even number\n",iNo);
   }
   return 0;
   }
   bool CheakEven(int iValue)
   {
	   if((iValue%2==0))
	   {
		   return true;
	   }
	   else
	   {
		   return false;
	   }
   }