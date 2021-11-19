
#include<iostream>
using namespace std;

void Swap(float *p,float *q)
{
  float temp;

  temp=*p;
  *p=*q;
  *q=temp;
}


int main()
{
  float x=0,y=0;

  cout<<"Enter first number\n";
  cin>>x;

cout<<"Enter Second number\n";
  cin>>y;


  Swap(&x,&y);//Swap(100,200);


  cout<<"value of X become:"<<x<<"\n";
  cout<<"value of y become:"<<y<<"\n";

      return 0;
}