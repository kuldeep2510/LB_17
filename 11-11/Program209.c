#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
    struct node *prev;
}NODE, *PNODE, **PPNODE;

void InsertFirst(PPNODE Head, int no)
{
    PNODE newn = NULL;
    
    newn = (PNODE)malloc(sizeof(NODE));
    
    newn->data = no;
    newn -> next = NULL;
    newn->prev = NULL;
    
    if(*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        newn -> next = *Head;
        (*Head) ->prev = newn;
        
        *Head = newn;
    }
}

void InsertLast(PPNODE Head, int no)
{
    PNODE newn = NULL;
    PNODE temp = *Head;
    
       newn = (PNODE)malloc(sizeof(NODE));
       
       newn->data = no;
       newn -> next = NULL;
       newn->prev = NULL;
       
       if(*Head == NULL)
       {
           *Head = newn;
       }
       else
       {
           while(temp -> next != NULL)
           {
               temp = temp->next;
           }
           
           temp->next = newn;
           newn->prev = temp;
       }
}

void Display(PNODE Head)
{
    while(Head != NULL)
    {
        printf("|%d| -> ",Head->data);
        Head = Head -> next;
    }
    printf("NULL\n");
}

int Count(PNODE Head)
{
    int iCnt = 0;
    while(Head != NULL)
    {
        iCnt++;
        Head = Head->next;
    }
    
    return iCnt;
}

void DeleteFirst(PPNODE Head)
{

      PNODE temp=*Head;

   if(*Head!=NULL)//LL cntains Atleast 1 node
   {
      *Head=(*Head)->next;
      free(temp);
      if(*Head!=NULL)
      {
      (*Head)->prev=NULL;
      }
   }
}
void DeleteFirstX(PPNODE Head)
{
      if(*Head==NULL)
      {
            return;
      }
      else if((*Head)->next==NULL)
      {
         free(*Head);
         *Head=NULL;
      }
      else
      {
         *Head=(*Head)->next;
         free((*Head)->prev);
         (*Head)->prev=NULL;
      }
}
void DeleteLast(PPNODE Head)
{
     PNODE temp=*Head;
      if(*Head==NULL)
      {
            return;
      }
      else if((*Head)->next==NULL)
      {
         free(*Head);
         *Head=NULL;
      }
      else
      {
            while(temp->next!=NULL)
            {
                  temp=temp->next;
            }
            temp->prev->next=NULL;
            free(temp);
      }
}

void InsertAtPos(PPNODE Head ,int no,int iPos)
{
      int size =Count(*Head);
      int i=0;
      PNODE temp=*Head;
      PNODE newn=NULL;

      if((iPos<1)||(iPos>size+1))
      {
            printf("Invalid position\n");
            return;
      }
      if(iPos==1)
      {
            InsertFirst(Head,no);
      }
      else if(iPos==size+1)
      {
            InsertLast(Head,no);

      }
      else
      {
         newn=(PNODE)malloc(sizeof(NODE));


         newn->next=NULL;
         newn->prev=NULL;
         newn->data=no;

         for(i=1;i<(iPos-1);i++)
         {
               temp=temp->next;
         }
         newn->next=temp->next;
         newn->next->prev=newn;
         temp->next=newn;
         newn->prev=temp;
      }
}

void DeleteAtPos(PPNODE Head ,int iPos)
{
      int size =Count(*Head);
      int i=0;
      PNODE temp=*Head;
    

      if((iPos<1)||(iPos>size+1))
      {
            printf("Invalid position\n");
            return;
      }
      if(iPos==1)
      {
            DeleteFirst(Head);
      }
      else if(iPos==size+1)
      {
            DeleteLast(Head);

      }
      else
      {

         for(i=1;i<(iPos-1);i++)
         {
               temp=temp->next;
         }
         temp->next=temp->next->next;
         free(temp->next->prev);
         temp->next->prev=temp;
      }
}

int main()
{
    PNODE first = NULL;
    int icnt = 0;
    
    InsertFirst(&first,51);
    InsertFirst(&first,21);
    InsertFirst(&first,11);
    
    InsertLast(&first,101);
    
    Display(first);
    
    icnt = Count(first);
    printf("Number of elements are : %d\n",icnt);
    
    return 0;
}


