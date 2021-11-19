
#include<iostream>
using namespace std;



//Specific function
void Swap(char *p,char *q)
{
  char temp;

  temp=*p;
  *p=*q;
  *q=temp;
}

//Generic function
template<class T>
void SwapX(T *p,T *q)
{
  T temp;

  temp=*p;
  *p=*q;
  *q=temp;
}

int main()
{
  char x='A',y='B';
  SwapX(&x,&y);
  cout<<"value of X become:"<<x<<"\n";
  cout<<"value of y become:"<<y<<"\n";


int i=11,j=21;
  SwapX(&i,&j);//Swap(100,200);


  cout<<"value of X become:"<<i<<"\n";
  cout<<"value of y become:"<<j<<"\n";

      return 0;
}