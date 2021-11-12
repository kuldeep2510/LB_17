#include<stdio.h>
#include<stdlib.h>

int Diffrance(int Arr[],int iSize)
{
    int i=0,iMax=Arr[0];
    int Diff=0;
    int iMin=Arr[0];
    


    for(i=0;i<iSize;i++)
    {
      

      if(Arr[i]>iMax)
      {
        iMax=Arr[i];

      }
      

      if(Arr[i]<iMin)
      {
        iMin=Arr[i];
      }
    }
  Diff=iMax-iMin;
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


iRet=Diffrance(ptr,iLength);


printf("Diffrance is %d\n:",iRet);



  free(ptr);
    return 0;
}