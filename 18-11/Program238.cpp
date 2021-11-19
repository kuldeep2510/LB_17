#include<iostream>
using namespace std;
int SumR(int Arr[],int iSize)
{
 static int iSum=0,i=0;

   if(i<iSize)
   {
    iSum=iSum+Arr[i];
    i++;;
    SumR(Arr,iSize);
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
iret=SumR(P,iLength);
cout<<"Addition is:"<<iret<<"\n";
  delete []P;

      return 0;
}