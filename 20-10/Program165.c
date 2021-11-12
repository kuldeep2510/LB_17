
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<io.h>
#include<fcntl.h>

int main()
{
      int fd=0;//file discriptor
      char Fname[30];
      char Buffer[10]; //Mug
      int iRet=0;

      printf("enter file name\n");
      scanf("%s",Fname);
      fd=open(Fname,O_RDONLY);

      if(fd==-1)
      {
            printf("unable to open file fie\n");
          return -1;//returned to OS
      }
      else
      {
            printf("file succesfully opened with FD:%d\n",fd);

      }

    while ((iRet=read(fd,Buffer,sizeof(Buffer)))!=0)
    {
          printf("Data from file is:\n");
        write(1,Buffer,iRet); //(1=display on monitor)
    }
    
    

     close(fd);//it is good to close after open file
return 0;
}