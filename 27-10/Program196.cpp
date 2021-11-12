#include<iostream>
using namespace std;


typedef unsigned int UINT;

UINT ONRange(UINT iNo,int iStart,int iEnd)
{
 UINT iMask=0;
 UINT iResult;

 
 iMask=((0xFFFFFFFF)<<(iStart-1))&((0xFFFFFFFF)>>(32-iEnd));

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



iRet=ONRange(iValue,i,j);


cout<<"updated umber is:"<<iRet<<"\n";
      return 0;
}