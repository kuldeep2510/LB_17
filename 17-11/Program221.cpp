
#include<iostream>
using namespace std;

void Swap(char *p,char *q)
{
  char temp;

  temp=*p;
  *p=*q;
  *q=temp;
}


int main()
{
  char x='\0',y='\0';

  cout<<"Enter first Char\n";
  cin>>x;

cout<<"Enter Second Char\n";
  cin>>y;


  Swap(&x,&y);//Swap(100,200);


  cout<<"value of X become:"<<x<<"\n";
  cout<<"value of y become:"<<y<<"\n";

      return 0;
}