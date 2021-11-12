#include<stdio.h>
#include<stdlib.h>


int LastOccarance(int Arr[],int iSize,int iNo)
{
  int i=0,iLast=0;
  
  for(i=iSize-1;i>=0;i--)
  {
    if(Arr[i]==iNo)
    
     {
      break;}
    }
   
    {
    return i;
  }
  

}
int main()

{
  int iLength=0,i=0,iValue=0;
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
printf("Enter the Element to Search\n");
scanf("%d",&iValue);

iRet= LastOccarance(ptr,iLength,iValue);
if(iRet==-1)
{
  printf("There is no such number\n");
}
else{
printf("Number Last occorance:%d",iRet);
}
  free(ptr);
    return 0;
}