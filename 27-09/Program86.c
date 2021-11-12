#include<stdio.h>
#include<stdlib.h>

int Min(int Arr[],int iSize)
{
    int i=0,iMax=Arr[0];
    
    


    for(i=1;i<iSize;i++)  //loop start from 1
    {
      

      if(Arr[i]<iMax)
      {
        iMax=Arr[i];
      }
      
    }
   return iMax;
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


iRet=Min(ptr,iLength);


printf("Max is %d\n:",iRet);



  free(ptr);
    return 0;
}