#include<iostream>
using namespace std;
int SumI(int Arr[],int iSize)
{
  int iSum=0,i=0;

   for ( i = 0; i < iSize; i++)
   {
     iSum=iSum+Arr[i];
   }
   return iSum;
}

int main()
{
  int iLength=0,i=0,iret=0;
  int *P=NULL;

  cout<<"Enter number of elements"<<"\n";
  cin>>iLength;

   P=new int[iLength];

  cout<<"Enter the elemets";

  for(i=0;i<iLength;i++)
  {
    cin>>P[i];
  }
iret=SumI(P,iLength);
cout<<"Addition is:"<<iret<<"\n";
  delete []P;

      return 0;
}