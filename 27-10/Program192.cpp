#include<iostream>
using namespace std;


typedef unsigned int UINT;

UINT ToggleNibble(int iNo)
{
  
   int iMask=0xF000000F;
   int iResult=0;

     iResult=iNo^iMask;
        return iResult;
 
}


int main()
{

UINT iValue=0,iRet=0;
cout<<"Enter number \n";
cin>>iValue;



iRet=ToggleNibble(iValue);


cout<<"updated umber is:"<<iRet<<"\n";
      return 0;
}