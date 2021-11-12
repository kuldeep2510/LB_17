#include<stdio.h>

int Toggle(char ch)
{
    
  if((ch>='A') && (ch<='A'))
  {
      return (ch+32);

  }
     
  else if
  ((ch>='a') && (ch<='z') )
     { return (ch-32);

     }

}
int main()
{
char cValue = '\0';
char CRet = '\0';
printf("Enter the character\n");
scanf("%c",&cValue);
CRet = Toggle(cValue);
printf("Capital letter is\n%c",CRet);
return 0;
}