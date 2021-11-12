#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
int fd=0;
char Arr[10];
fd=open("LB17.txt",O_RDWR );

if(fd==-1)
{

      printf("unable to opent file\n");
}

printf("Data from file is:\n");
read(fd,Arr,5);

write(1,Arr,5);

close(fd);








      return 0;


}