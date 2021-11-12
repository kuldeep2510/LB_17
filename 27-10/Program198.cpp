#include<iostream>
using namespace std;


typedef unsigned int UINT;

UINT DisplayByte(UINT iNo)
{
 UINT iMask=0x00FFFF00;
 UINT iTemp=iNo & iMask;

 UINT Byte1=iNo<<24;
 UINT Byte4=iNo>>24;

 UINT iReturn=iTemp|Byte1 | Byte4;

 return iReturn;
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