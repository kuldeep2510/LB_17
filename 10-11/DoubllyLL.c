#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
    struct node *prev;
}NODE, *PNODE, **PPNODE;

void InsertFirst(PPNODE Head,PPNODE Tail, int no)
{
    PNODE newn = NULL;
    
    newn = (PNODE)malloc(sizeof(NODE));
    
    newn->data = no;
    newn -> next = NULL;
    newn->prev = NULL;
    
    if(*Head == NULL && *Tail==NULL)
    {
        *Head = newn;
        *Tail=newn;
    }
    else
    {
        newn -> next = *Head;
        (*Head) ->prev = newn;
        
        *Head = newn;
    }
}

void InsertLast(PPNODE Head,PPNODE Tail, int no)
{
    PNODE newn = NULL;
    PNODE temp = *Head;
    
       newn = (PNODE)malloc(sizeof(NODE));
       
       newn->data = no;
       newn -> next = NULL;
       newn->prev = NULL;
       
       if((*Head == NULL)  && (*Tail==NULL) )
       {
           *Head = newn;
            *Tail=newn;
       }
       else
       {
           (*Tail)->next=newn;
           newn->prev=*Tail;
           *Tail=newn;

       }
}


void DeleteFirst(PPNODE Head,PPNODE Tail)
{
    
    if(*Head==NULL && *Tail==NULL)
    {
       return;
    }
    else if (*Head==*Tail)
    {
       free(*Head);

       *Head=NULL;
       *Tail=NULL;
    }
    else
    {
        *Head=(*Head)->next;
        free ((*Head)->prev);
        (*Head)->prev=NULL;

    }
    
}
void DeleteLast(PPNODE Head,PPNODE Tail)
{

    PNODE temp=*Head;
    if(*Head==NULL && *Tail==NULL)
    {
        return ;

    }
    else if((*Head)==(*Tail))
    {
        free(*Head);
       *Head=NULL;
       *Tail=NULL;

    }
    else
    {
      *Tail=(*Tail)->prev;
      free((*Tail)->next);
      (*Tail)->next=NULL;
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

void InsertAtPos(PPNODE Head,PPNODE Tail,int no,int iPos)
{
   int size=0;
   PNODE newn=NULL;
   PNODE temp=*Head;
   int i=0;
   size=Count(*Head);

   if((iPos<1)||(iPos>size+1))//Filter for invalid condition
   {
       printf("Invalid Position\n");
       return;
   }
   if(iPos==1)//first position
   {
       InsertFirst(Head,Tail,no);
   }
   else if (iPos==size+1)//Last positon 
   {
      InsertLast(Head,Tail,no);

   }
   else   //in Between position
   {
      newn=(PNODE)malloc(sizeof(NODE));

      newn->data=no;
      newn->next=NULL;

      for(i=1;i<(iPos-1);i++)
      {
          temp=temp->next;
      }
      newn->next=temp->next;
      temp->next=newn;
      newn->prev=temp;
   }
   
}
void DeleteAtPos(PPNODE Head,PPNODE Tail,int iPos)
{
   int size=0;
  
   PNODE temp=(*Head);
   int i=0;
   size=Count(*Head);
   PNODE targeted =NULL;

   if((iPos<1)||(iPos>size))//Filter for invalid condition
   {
       printf("Invalid Position\n");
       return;
   }
   if(iPos==1)//first position
   {
       DeleteFirst(Head,Tail);
   }
   else if (iPos==size)//Last positon 
   {
     DeleteLast(Head,Tail);

   }
   else   //in Between position
   {
     
      for(i=1;i<(iPos-1);i++)
      {
          temp=temp->next;
      }
     targeted=temp->next;

     temp->next=targeted->next;
     targeted->next->prev=temp;
     free(targeted);
   }


}

int main()
{
    PNODE first = NULL;
    PNODE last=NULL;
    int icnt = 0;
    int iChoice = 1, value = 0, iRet = 0, pos = 0;
    
    InsertFirst(&first,&last,51);
    InsertFirst(&first,&last,21);
    InsertFirst(&first,&last,11);
    
    InsertLast(&first,&last,101);
    
    Display(first);
    
    icnt = Count(first);
    printf("Number of elements are : %d\n",icnt);




 
    
    while(iChoice != 0)
    {
        printf("\n_________________________________________________________\n");
        printf("Enter the desired operation that you want to perform on LinkedList\n");
        printf("1 : Insert the node at first position\n");
        printf("2 : Insert the node at last position\n");
        printf("3 : Insert the node at  the desired position\n");
        printf("4 : Delete the first node\n");
        printf("5 : Delete the last node\n");
        printf("6 : Delete the node at desired position\n");
        printf("7 : Display the contents of linked list\n");
        printf("8 : Count the number of nodes from linked list\n");
        printf("0 : Terminate the application\n");
        printf("\n_________________________________________________________\n");
        scanf("%d",&iChoice);

        switch(iChoice)
        {
            case 1:
                printf("Enter the data to insert\n");
                scanf("%d",&value);
                InsertFirst(&first,&last,value);
                break;
                
            case 2:
                printf("Enter the data to insert\n");
                scanf("%d",&value);
                InsertLast(&first,&last,value);
                break;
                
            case 3:
                printf("Enter the data to insert\n");
                scanf("%d",&value);
                printf("Enter the position\n");
                scanf("%d",&pos);
                InsertAtPos(&first,&last,value,pos);
                break;
                
            case 4:
                DeleteFirst(&first,&last);
                break;
                
            case 5:
                DeleteLast(&first,&last);
                break;
                
            case 6 :
                printf("Enter the position\n");
                scanf("%d",&pos);
                DeleteAtPos(&first,&last,pos);
                break;
                
            case 7:
                printf("Elemenet of Linked list are\n");
                Display(first);
                break;
                
            case 8:
                iRet = Count(first);
                printf("Number of elements are : %d\n",iRet);
                break;
                
            case 0:
                printf("Thank for using Marvellous Linked List\n");
                break;
                
            default:
                printf("Please enter proper choice\n");
                break;
        }
    }
    
    return 0;
}




