#include<stdio.h>

int CountCap(char *str)
{
int iCnt = 0;

// Fileter

while(*str != '\0')
{
  printf("%c",*str);
  if(*str>='A' && *str<='Z')
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


iRet = CountCap(arr);

printf("%d\t",iRet);

return 0;
}