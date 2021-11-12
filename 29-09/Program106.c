#include<stdio.h>

typedef unsigned int UINT;
UINT strlenX(char *str)//strlen
{
  int iCnt=0;

  if(str==NULL)
  {
  return 0;
  }
  while (*str!='\0')
  {
      iCnt++;
      str++;


  }
  return iCnt;
}

int main()
{
    char Arr[20];
    int iRet=0;

    
    printf("Enter your name\n");
    scanf("%[^\n]s",Arr);

    //char *ptr=NULL:

    iRet=strlenX(Arr);  //strlenX(NULL); strlenX(ptr);     

    printf("length of strig is %d\n",iRet);

return 0;
}