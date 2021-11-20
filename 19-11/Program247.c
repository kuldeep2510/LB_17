#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
typedef struct node
{
      int data;
      struct node *lchild;
      struct node *rchild;
}NODE,*PNODE,**PPNODE;

void Insert(PPNODE Head,int no)
{
      PNODE newn=NULL;
       PNODE temp=*Head;
      newn=(PNODE) malloc (sizeof(NODE));
     
      newn->data=no;
      newn->lchild=NULL;
      newn->rchild=NULL;


      if(*Head=NULL)
      {
          *Head=newn;
      }
      else
      {
            
            while (1)//or while(true)Unconditional Loop for Unconditional for(;;)
            {
              if (temp->data==no)
              {
                  printf("Duplicate node\n");
                 free( newn); 
                 break;
                 
              }
              else if (no < (temp->data))//small data
              {
                  if(temp->lchild==NULL)
                  {
                        temp->lchild=newn;
                        break;
                  }
                 temp=temp->lchild;
                   
              }
              else if(no > (temp->data))// lahan data
              {
                   if (temp->rchild==NULL)
                   {
                       temp->rchild=newn;
                    break;
                   }
                    temp=temp->rchild;
              }
              

              
              
            }
            
            
      }
}

bool Serach(PNODE Head,int no)
{
     
      if(Head==NULL)//empty tree
      {
            return false;
      }
      else//tree contain atleast one node
      {
          while (Head!=NULL)
          {
                if((Head->data)==no)//node found
                {
                   
                   break;
                }
                else if(no>(Head->data))
                {
                  Head=Head->rchild;
                }
                else if(no<(Head->data))
                {
                  Head=Head->lchild;
                }
          }
          if(Head==NULL)
          {
                return false;
          }
          else
          {
                return true;
          }
          
      }
}

int main()
{
      int no=0;
      bool bret=false;
      PNODE first =NULL;
      Insert(&first,51);
      Insert(&first,21);
      Insert(&first,101);

     printf("enter no to search\n");
     scanf("%d",&no);

     bret=Serach(first,no);

     if(bret==true)
     {
           printf("Data is there \n");
     }
     else
     {
         printf("Data is not there\n");
     }

      return 0;
}