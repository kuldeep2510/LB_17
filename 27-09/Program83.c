#include<stdio.h>
#include<stdlib.h>

int count(int Arr[],int iSize)
{
    int i=0,iCnt=0;


    for(i=0;i<iSize;i++)
    {
        if((Arr[i]>10) &&(Arr[i]<20))
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
int iRet=0;
  printf("Enter number of element\n");
  scanf("%d",&iLength);


  ptr=(int*)malloc(sizeof (int)*iLength);

printf("Enter elements\n");
for(i=0;i<iLength;i++)
{
    scanf("%d",&ptr[i]);

}


iRet=count(ptr,iLength);


printf("grater than 10 is :%d\n",iRet);



  free(ptr);
    return 0;
}