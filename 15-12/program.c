#include<stdio.h>
#include<stdlib.h>
#include<stdio.h>
#include<stdbool.h>

typedef struct node
{
      int data;
      struct node * next;
}NODE,*PNODE,**PPNODE;


void InsertFirst(PPNODE First,int no)
{
      PNODE newn=NULL;
      

      newn=(PNODE)malloc(sizeof(NODE));

      newn->data=no;
      newn->next=NULL;

      if(*First==NULL)
      {
         *First=newn;
      }
      else
      {
           newn->next=*First;
           *First=newn;
      }


}

bool CheakLoop(PNODE First)
{
      PNODE Fast=First;
      PNODE slow=First;
      bool bret=false;


      while ((Fast!=NULL)&&(slow!=NULL)&&(Fast->next!=NULL))
      {
           Fast=Fast->next->next;
           slow=slow->next;


            if (Fast==slow)
        {
          bret=true;
          break;
        }
      }

     
      return bret;
      
}
void Display(PNODE First)
{
      PNODE temp=First;
      while (temp!=NULL)
      {
           printf("|%d|->",temp->data);
           temp=temp->next;
      }
      
}


int main()
{
      PNODE Head=NULL;
      bool bret=false;


      InsertFirst(&Head,60);
      InsertFirst(&Head,50);
      InsertFirst(&Head,40);
      InsertFirst(&Head,30);
      InsertFirst(&Head,20);
      InsertFirst(&Head,10);

     PNODE temp1=Head;
     PNODE temp2=Head;

     while (temp1->next!=NULL)
     {
           temp1=temp1->next;
     }

     temp2=temp2->next->next;

     //temp1->next=temp2;

     bret=CheakLoop(Head);

     if(bret==true)
     {
         printf("havinf loop");
     }
     else
     {
           printf("no loop");
     }
     
     


    
    
    
    
    
    
    
     // Display(Head);




      return 0;
}