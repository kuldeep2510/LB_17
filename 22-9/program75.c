#include<stdio.h>
int Addition(int *Brr,int iSize)
{

   int  iCnt=0,iSum=0;

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
    iSum=iSum+Brr[iCnt];
    }

    return iSum;


}
int main()

{
    int iCnt=0,iRet=0;
    int Arr[5];

    printf("Enter number\n");

   

   for(iCnt=0;iCnt<5;iCnt++)
     {
         scanf("%d",&Arr[iCnt]);
         

         
     }


    //iSum=Arr[0]+Arr[1]+Arr[2]+Arr[3]+Arr[4];
     iRet=Addition(Arr,5);
    printf("Addition:%d\n",iRet);


    return 0;
}