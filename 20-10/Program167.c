
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<io.h>
#include<fcntl.h>

int main()
{
      int fdSrc=0,fdDest=0;//file discriptor
      char Fname1[30];
      char Fname2[30];
      char Buffer[1024]; //Mug 1024 byte os exact size
      printf("Enter source file name");
      int iRet=0;

      printf("enter file name\n");
      scanf("%s",Fname1);
      fdSrc=open(Fname1,O_RDONLY);

      if(fdSrc==-1)
      {
            printf("unable to open file fie\n");
          return -1;//returned to OS
      }
      else
      {
            printf("file succesfully opened with FD Source:%d\n",fdSrc);

      }

     printf("Enter Destination file name");
     scanf("%s",Fname2);
     fdDest=creat(Fname2,0777);

    while ((iRet=read(fdSrc,Buffer,sizeof(Buffer)))!=0)
    {
          printf("Data from file is:\n");
        write(fdDest,Buffer,iRet); //(1=display on monitor)
    }
    
    

     close(fdSrc);
     close(fdDest);//it is good to close after open file
return 0;
}