#include<iostream>
using namespace std;

typedef unsigned int UINT;
/*

op1   op2    |    ^
1      0     1    1
0      1     1    1
1      1     1    0
0      0     0    0


*/
//iNo   0000 0000 1110 0100 1111 0100 1011 1010
//iPos   6
//iRet  0000 0000 1110 0100 1111 0100 1001 1010

UINT ToggleBit(UINT iNo,int iPos)
{
  int iMask=0x00000001;
  int iResult=0;
  if((iPos<1)||(iPos>32))
  {
        return 0;
  }
  iMask=iMask<<(iPos-1);
  iResult=iNo^iMask;

  return iResult;
}

//---------------------------------------
//position=5
//Input    01100100
//iMask    00010000
//---------------------------------------
//output   01110100
int main()
{

int iValue=0,iRet=0,i=0;
cout<<"Enter number \n";
cin>>iValue;

cout<<"Enter position of bit\n";
cin>>i;

iRet=ToggleBit(iValue,i);


cout<<"updated number is:"<<iRet<<"\n";
      return 0;
}