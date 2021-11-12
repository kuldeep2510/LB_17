
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<io.h>

int main()
{
      int fd=0;//file discriptor
      char Fname[30];

      printf("enter file name\n");
      scanf("%s",Fname);
      fd=creat(Fname,0777);//permistion no 0777

      if(fd==-1)
      {
            printf("unable to create the fie\n");

      }
      else
      {
            printf("file succesfully created\n");

      }

return 0;
}