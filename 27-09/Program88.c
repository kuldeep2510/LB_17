#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheakNumber(int Arr[],int iSize)
{
  int i=0;
  for(i=0;i<iSize;i++)
  {
    if(Arr[i]==11)
    {
      return true;
    }
    
  }

return false;
}
int main()

{
  int iLength=0,i=0;
  int *ptr=NULL;
bool bRet=false;
  printf("Enter number of element\n");
  scanf("%d",&iLength);


  ptr=(int*)malloc(sizeof (int)*iLength);

printf("Enter elements\n");
for(i=0;i<iLength;i++)
{
    scanf("%d",&ptr[i]);

}


bRet=CheakNumber(ptr,iLength);
if(bRet==true)
{
  printf("Nmuberis there");

}
else
{
  printf("Number is not there");
}






  free(ptr);
    return 0;
}