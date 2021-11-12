#include<stdio.h>

int CaptoSmall(char ch)
{
    
  if(ch>='A' && ch<='Z') 
  {
      return (ch+32);

  }
  

}
int main()
{
char cValue = '\0';
char CRet = '\0';
printf("Enter the character\n");
scanf("%c",&cValue);
CRet = CaptoSmall(cValue);
printf("Capital letter is\n%c",CRet);
return 0;
}