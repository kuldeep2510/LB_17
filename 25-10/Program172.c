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

      return -1;
}
//0 from starting postion
//1 from Current position
//2 from end of the file
lseek(fd,5,0);

read(fd,Arr,5);

write(1,Arr,5);

printf(" ");
lseek(fd,5,1);


read(fd,Arr,5);

write(1,Arr,5);


close(fd);








      return 0;


}