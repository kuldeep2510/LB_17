#include<stdio.h>

void Display();

int main()
{
	Display();
	
	return 0;
}
void Display()
{
	int iNo=7521;
	int iDigit=0;
	while(iNo!=0)
	{
	iDigit=iNo%10;          //1
	printf("%d\n",iDigit);  //1
	iNo=iNo/10; }
}