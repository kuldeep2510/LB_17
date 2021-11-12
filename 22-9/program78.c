#include<stdio.h>
#include<stdlib.h>
int Addition(int *Brr,int iSize)
{

   int  iCnt=0,iSum=0;

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
    iSum=iSum+(*Brr);
    Brr++;
    }

    return iSum;


}
int main()

{
    int iCnt=0,iRet=0,iLength=0;
    int *Arr=NULL;


    printf("enter number of Elements\n");
    scanf("%d",&iLength);


    Arr=(int*)malloc(sizeof(int)*iLength);

    printf("Enter number\n");
   for(iCnt=0;iCnt<iLength;iCnt++)
     {
         scanf("%d",&Arr[iCnt]);
         

         
     }


   
     iRet=Addition(Arr,iLength);
    printf("Addition:%d\n",iRet);

     free(Arr);
    return 0;
}