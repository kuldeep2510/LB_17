#include<stdio.h>
#include<stdbool.h>

bool Chkcapital(char ch)
{
    
  if((ch>='0') && (ch<='9') )
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
printf("It is Digit");
}
else
{
printf("It is not not digit");
}
return 0;
}