#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
int fd=0;

fd=open("LB17.txt",O_RDWR );

if(fd==-1)
{

      printf("unable to opent file\n");

      return -1;
}



lseek(fd,10,2);




write(fd,"  ",1);


close(fd);








      return 0;


}