#include<stdio.h>
#include<stdbool.h>

bool Chkcapital(char ch)
{
    
  if((ch>=65) && (ch<=90) )
  {
      return true;

  }
  else
  {
    return false;
  }

}
int main()
{
char cValue = '\0';
bool bRet = false;
printf("Enter the character\n");
scanf("%c",&cValue);
bRet = Chkcapital(cValue);
if(bRet == true)
{
printf("It is capital Letter");
}
else
{
printf("It is not capital Letter");
}
return 0;
}