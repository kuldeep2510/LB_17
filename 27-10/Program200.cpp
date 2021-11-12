#include<iostream>
using namespace std;


typedef unsigned int UINT;

UINT DisplayByte(UINT iNo)
{
return (iNo & 0x00FFFF00)|(iNo<<24)|(iNo>>24);
}


int main()
{

UINT iValue=0,iRet=0;
cout<<"Enter number \n";
cin>>iValue;





iRet=DisplayByte(iValue);

cout<<"Swap :"<<iRet;

      return 0;
}