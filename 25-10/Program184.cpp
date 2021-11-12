#include<iostream>
using namespace std;


class Marvellous
{
public :
int Addition(int x,int y)
{
  int iAns=0;
  iAns=x+y;

  return iAns;
}

};

int main()
{
  int ino1=0,iNo2=0,iRet=0;
Marvellous mobj;// in java we have to write Marvellous mobj=new Marvellous
  cout<<"Enter number 1st\n";
  cin>>ino1;
  cout<<"Enter number 2nd\n";
  cin>>iNo2;
  

iRet=mobj.Addition(ino1,iNo2);

  cout<<"addition is\n"<<iRet;

 return 0;
}