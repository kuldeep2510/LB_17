#include<iostream>
using namespace std;
void DisplayI()
{
  int iCnt=1;
  
  while(iCnt<=4)
  {
    cout<<"Kuldeep Hajare"<<"\n";
    iCnt++;
  }
}
void DisplayR()
{
 static int iCnt=1;

  if(iCnt<=4)
  {
    cout<<"Marvellous"<<"\n";
    iCnt++;
    DisplayR();
  }
}


int main()
{



DisplayI();


DisplayR();
      return 0;
}