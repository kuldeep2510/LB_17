#include<stdio.h>
void DisplayBinaray(int iNo)
{
int iDigit=0;
    while (iNo!=0)
    {
     iDigit =iNo%2;

     printf("%d\t",iDigit);
     iNo=iNo/2;
    }
    
}
int main()
{
   int iValue=0;



   printf("Enter number\n");
   scanf("%d",&iValue);

   DisplayBinaray(iValue);
   


    return 0;
}