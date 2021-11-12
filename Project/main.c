///////////////////////////////////////////////////////
//
//  Accept 2 numbers from user and perform the addition
//
///////////////////////////////////////////////////////


#include "Header.h"                  //User Defined header file inclusion

//Entry point function

int main()
{
	int iValue1=0, iValue2, iRet=0;  //Local variable
	
	
	printf("Enter first number=\n");
	scanf("%d",&iValue1);            //Accepting the input
	
	printf("enter second number=\n");
	scanf("%d",&iValue2);             //Accepting the input 
	
	iRet=Addition(iValue1,iValue2);  //Fuction call
	
	printf("Addition is:%d\n",iRet);
	return 0;  //return sucess to OS
}