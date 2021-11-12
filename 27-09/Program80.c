#include<stdio.h>
#include<stdlib.h>

int CountEven(int Arr[],int iSize)
{
    int i=0,iCnt=0;


    for(i=0;i<iSize;i++)
    {
        if((Arr[i]%2)==0)
        {
           iCnt++;
        }
    }
   return iCnt;
}

int main()

{
  int iLength=0,i=0;
  int *ptr=NULL;
  float iRet=0;
  printf("Enter number of element\n");
  scanf("%d",&iLength);


  ptr=(int*)malloc(sizeof (int)*iLength);

printf("Enter elements\n");
for(i=0;i<iLength;i++)
{
    scanf("%d",&ptr[i]);

}


iRet=CountEven(ptr,iLength);


printf("No of Even elements are :%d\n",iRet);



  free(ptr);
    return 0;
}