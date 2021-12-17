#include<stdio.h>
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef  struct node
{
      int data;
      struct node * next;

}NODE,*PNODE,**PPNODE;


void InsertFirst(PPNODE first,int no)
{
      PNODE newn=(PNODE)malloc(sizeof(NODE));
      newn->data=no;
      newn->next=NULL;


      if(*first==NULL)
      {
            *first=newn;
      }
      else
      {
            newn->next=*first;
            *first=newn;
      }
}

void Display(PNODE first)
{ 
      while(first!=NULL)
      {
      printf("|%d|->",first->data);

      first=first->next;
      }
      printf("\n");

}

      

      

bool CheakLoop(PNODE First)
{
      PNODE Fast=First; 
      PNODE slow=First;
      bool flag=false;

      while ((Fast!=NULL)&&(Fast->next!=NULL)&&(slow!=NULL))
      {
         Fast=Fast->next->next;

         slow=slow->next;

         if(Fast==slow)
         {
               flag=true;
               break;

         }
      }
      return flag;
      
}


int main()
{
      PNODE Head=NULL;
      PNODE temp1,temp2;
      bool bret=false;


    
       InsertFirst(&Head,60);
       InsertFirst(&Head,50);
      InsertFirst(&Head,40);
       InsertFirst(&Head,30);
      InsertFirst(&Head,20);
       InsertFirst(&Head,10);


       temp1=Head; 
       temp2=Head;
       
       while (temp1->next!=NULL)
       {
          temp1=temp1->next;

       }
       temp2=temp2->next->next;

       temp1->next=temp2;
       

      Display(Head);

      bret=CheakLoop(Head);
      if(bret==true)
      {
            printf("Loop is detected");
      } 
      else
      {
            printf("Loop is not detected");
      }

     
    return 0;
}