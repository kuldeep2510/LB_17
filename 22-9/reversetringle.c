#include<stdio.h>
void Pattern(int iRow, int iCol)
{
  int iCnt=0;
  int i=0,j=0;
  for(i=iCol;i>=1;i--)
  {
      for(j=1;j<=i;j++)
      {
          printf("*\t");
      }
      printf("\n");
  }
}
int main()
{
int iValue1 = 0, iValue2 = 0;
printf("Enter number of rows and columns");
scanf("%d %d",&iValue1, &iValue2);
Pattern(iValue1, iValue2);
return 0;
}