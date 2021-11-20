#include<iostream>
using namespace std;

typedef struct node
{
      int data;
      struct node *lchild;
      struct node *rchild;
}NODE,*PNODE,**PPNODE;

void Insert(PPNODE Head,int no) 
{
      PNODE temp=*Head;
      PNODE newn=new NODE;

      newn->data=no;
      newn->lchild=NULL;
      newn->rchild=NULL;

      if (*Head==NULL)
      {
           *Head=newn;
      }
      else
      {
            while (1)
            {
                 if(temp->data==no)
                 {
                       delete newn;
                       break;
                 }
                 else if(no<(temp->data))
                 {
                       if (temp->lchild==NULL)
                       {
                           temp->lchild=newn;
                           break;
                       }
                       temp=temp->lchild;
                       
                 }
                 else if (no>(temp->data))
                 {
                       if(temp->rchild==NULL)
                       {
                             temp->rchild=newn;
                             break;

                       }
                       temp=temp->rchild;
                 }
                 
            }
            
      }
       
}
bool Search(PNODE Head,int no)
{
      if(Head==NULL)
      {
            return false;
      }
      else
      {
            while(Head!=NULL)
            {
                  if (Head->data==no)
                  {
                       break;
                  }
                  else if (no>(Head->data))
                  {
                        Head=Head->rchild;
                  }
                  else if (no<(Head->data))
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

      PNODE first=NULL;

      Insert(&first,51);
      Insert(&first,21);
      Insert(&first,101);
      
      cout<<"Enter no to search\n";
      cin>>no;

      bret=Search(first,no);

      if(bret==true)
      {
            cout<<"Data is there\n";
      }
      else
      {
             cout<<"Data is not there\n";
      }

      return 0;
}