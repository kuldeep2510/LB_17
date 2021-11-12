#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>

using namespace std;

class MarvellousFile
{
  char Fname[30];
  int fd;
  MarvellousFile(char *Name)
  {
    strcpy(Fname,Name);
    fd=open(Fname,Name);
    fd=op
  }
  ~MarvellousFile()//Destructor
};

int main()
{
  

 return 0;
}