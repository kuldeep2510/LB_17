#include<stdio.h>

int CountSmall(char *str)
{
int iCnt = 0;

// Fileter

while(*str != '\0')
{
  printf("%c",*str);
  if(*str>='a' && *str<='z')
  {
      iCnt++;
  }
  
  str++;
}

return iCnt;
}

int main()
{
char arr[20];
int iRet = 0;

printf("Enter string\n");
scanf("%[^'\n']s",arr);


iRet = CountSmall(arr);

printf("%d\t",iRet);

return 0;
}