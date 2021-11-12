#include<stdio.h>
#include<stdlib.h>


struct node
{
     int data;
     struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE Head,int no)
{
  PNODE newN =NULL;

//step1:Allocate the memory
  newN=(PNODE)malloc(sizeof(NODE));

  //step2:Initialize the node
  newN->data=no;
  newN->next=NULL;

  //step3:Insert the node
  if( *Head   == NULL    )
  {
     *Head=newN;
  }
  else
  {
    newN->next=*Head;
    *Head=newN;
  }
}

void InsertLast(PPNODE Head,int no)
{
  PNODE newN =NULL;
  PNODE temp=*Head;

//step1:Allocate the memory
  newN=(PNODE)malloc(sizeof(NODE));

  //step2:Initialize the node
  newN->data=no;
  newN->next=NULL;

  //step3:Insert the node
  if( *Head   == NULL    )
  {
     *Head=newN;
  }
  else
  {
    while (temp->next!=NULL)
    {
          temp=temp->next;
    }
    temp->next=newN;
  }
}
void Display(PNODE Head)
{
  while (Head!=NULL)
  {
      printf("%d\t",Head->data);
      Head=Head->next;
  }
  
}

int Count(PNODE Head)
{
    int  iCnt=0;
  while (Head!=NULL)
  {
     iCnt++;
      Head=Head->next;
  }
  return iCnt;
}

void DeleteFirst(PPNODE Head)
{
      PNODE temp=*Head;
      if(*Head!=NULL)//if LL cotains Atleast 1 node
      {
           *Head=(*Head)->next;
           free(temp);
      }
      
      
}

void DeleteLast(PPNODE Head)
{
      PNODE temp=*Head;
      if (*Head==NULL)
      {
          return;
      }
      else if((*Head)->next==NULL)//LL contain single node
      {
         free(*Head);
         *Head=NULL;
      }
      else//LL contain more than 1 Node
      {
          while (temp->next->next!=NULL)
          {
               temp=temp->next;
          }
          free(temp->next);
          temp->next=NULL;
      }
      
      
}
int main()
{
      int iRet=0;
  PNODE first=NULL;
InsertFirst(&first,101);
InsertFirst(&first,51);//InsertFirst(50,51)
InsertFirst(&first,21);//InsertFirst(50,21)
InsertFirst(&first,11);//InsertFirst(50,11)

InsertLast(&first,111);
Display(first);
iRet=Count(first);
printf("\n Number of elements are=%d\n",iRet);

DeleteFirst(&first);
Display(first);
iRet=Count(first);
printf("\n Number of elements are=%d\n",iRet);

DeleteLast(&first);
Display(first);
iRet=Count(first);
printf("\n Number of elements are=%d\n",iRet);
      return 0;
}
/* 
void InsertFirst(PPNODE Head,int no)
void InsertLast(PPNODE Head,int no)
void InsterAtPos(PPNODE Head,int no,int pos)

void DeleteFirst(PPNODE Head)
void DeleteLast(PPNODE Head)
void DeleteAtPos(PPNODE Head,int pos)

void Display(PNODE)
int Count(PNODE)
*/