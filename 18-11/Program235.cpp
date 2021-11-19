#include<iostream>
using namespace std;

int FactorialI(int iNo)
{
  int iFact=1;
  while (iNo!=0)
  {
    iFact=iFact*iNo;
    iNo--;
  }
  
  
return iFact;
  
}

int FactorialR(int iNo)
{
  static int iFact=1;
  if(iNo!=0)
  {
    iFact=iFact*iNo;
    iNo--;
    FactorialR(iNo);
  }
  
  
return iFact;
  
}

int main()
{
int x=0,iRet=0,iret2=0;

cout<<"Enter number\n";
cin>>x;

iRet=FactorialI(x);

cout<<"Summation of Digits are"<<iRet<<"\n";


 iret2=FactorialR(x);
cout<<"Summation of Digits are"<<iret2<<"\n";
      return 0;
}