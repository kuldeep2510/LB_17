#include<stdio.h>

int SmalltoCap(char ch)
{
    
  if((ch>='a') && (ch<='z') )
  {
      return (ch-32);

  }
  

}
int main()
{
char cValue = '\0';
char CRet = '\0';
printf("Enter the character\n");
scanf("%c",&cValue);
CRet = SmalltoCap(cValue);
printf("Capital letter is%c\n",CRet);
return 0;
}