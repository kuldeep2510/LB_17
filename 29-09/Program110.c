#include<stdio.h>
#include<stdbool.h>

bool ChkCapital(char ch)
{
    
  if((ch>='A') && (ch<='Z') )
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
bRet = ChkCapital(cValue);
if(bRet == true)
{
printf("It is Capital Letter");
}
else
{
printf("It is not Capital Letter");
}
return 0;
}