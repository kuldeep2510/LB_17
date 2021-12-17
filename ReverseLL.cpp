#include<iostream>
using namespace std;


struct node
{
int Data;
node *Next;
};
typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;


void InsertFirst(PPNODE Head , int no )
{
PNODE newn = NULL;
newn = (PNODE)malloc(sizeof(NODE));
newn->Next = NULL;
newn->Data = no;
if (*Head == NULL)
{
*Head = newn;
}
else
{
newn -> Next = *Head;
*Head = newn;
}
}

void Display(PNODE Head)
{
    PNODE temp=Head;
      while (temp!=NULL)
      {
         cout<<"|"<<temp->Data<<"|->";

          temp=temp->Next;
      }
     
      
}
PNODE Reverse(PNODE Head)
{
    PNODE temp=Head;
    PNODE p=NULL;
    PNODE n=NULL;
   
    cout<<"\nReverse LL";
   while (Head!=NULL)
   {
      

    n=temp->Next;
   temp->Next=p;

   p=temp;
   temp=n;
   }
   
  return p;
}



int main()
{
PNODE First = NULL;
InsertFirst(&First, 101);
InsertFirst(&First, 51);
InsertFirst(&First, 21);
InsertFirst(&First, 11);

Display(First);

PNODE newFirst= Reverse(First);

Display(newFirst);
return 0;
}