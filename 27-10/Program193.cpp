#include<iostream>
using namespace std;


typedef unsigned int UINT;

UINT ToggleRange(UINT iNo,int iStart,int iEnd)
{
 UINT iMask1=0xFFFFFFFF;
 UINT iMask2=0xFFFFFFFF;
 UINT iMask=0;
 UINT iResult;

 iMask1=iMask1<<(iStart-1);
 iMask2=iMask2>>(32-iEnd);
 iMask=iMask1&iMask2;

 iResult=iNo^iMask;

 return iResult;
}


int main()
{

UINT iValue=0,iRet=0,i=0,j=0;
cout<<"Enter number \n";
cin>>iValue;

cout<<"Enter starting number \n";
cin>>i;
cout<<"Enter ending number \n";
cin>>j;



iRet=ToggleRange(iValue,i,j);


cout<<"updated umber is:"<<iRet<<"\n";
      return 0;
}