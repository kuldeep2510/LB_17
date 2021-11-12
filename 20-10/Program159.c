
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<io.h>
#include<fcntl.h>

int main()
{
      int fd=0;//file discriptor
      char Fname[30];

      printf("enter file name\n");
      scanf("%s",Fname);
      fd=open(Fname,O_RDWR);

      if(fd==-1)
      {
            printf("unable to open file fie\n");

      }
      else
      {
            printf("file succesfully opened with FD:%d\n",fd);

      }

return 0;
}