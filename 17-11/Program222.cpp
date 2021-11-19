
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
  char x='\0',y='\0';

  cout<<"Enter first \n";
  cin>>x;

cout<<"Enter Second \n";
  cin>>y;


  SwapX(&x,&y);//Swap(100,200);


  cout<<"value of X become:"<<x<<"\n";
  cout<<"value of y become:"<<y<<"\n";

      return 0;
}