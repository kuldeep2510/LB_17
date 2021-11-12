
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<io.h>
#include<fcntl.h>

int main()
{
      int fd=0;//file discriptor
      char Fname[30];
      char Data[7];
      int iRet=0;

      printf("enter file name\n");
      scanf("%s",Fname);
      fd=open(Fname,O_RDWR);

      if(fd==-1)
      {
            printf("unable to open file fie\n");
          return -1;//returned to OS
      }
      else
      {
            printf("file succesfully opened with FD:%d\n",fd);

      }

     iRet=read(fd,Data,7);//14bytes use strlen for dynamic byet getting

     printf("%d bytes gets succesfully read from the file\n",iRet);

     printf("Data from the file is:%s\n",Data);
return 0;
}