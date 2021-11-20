#include<iostream>
using namespace std;

typedef struct node
{
      int data;
      struct node *Lchild;
      struct node *Rchild;
}NODE,*PNODE,**PPNODE;
void Insert(PPNODE Head,int no)
{
      PNODE newn =new NODE;

      newn->data=no;
      newn->Lchild=NULL;
      newn->Rchild=NULL;


      if(*Head=NULL)
      {
          *Head=newn;
      }
      else
      {
            PNODE temp=*Head;
            while (1)//or while(true)Unconditional Loop for Unconditional for(;;)
            {
              if (temp->data==no)
              {
                 delete newn; 
                 break;
                 
              }
              else if ((temp->data)>no)//small data
              {
                  if(temp->Lchild==NULL)
                  {
                        temp->Lchild=newn;
                        break;
                  }
                 temp=temp->Lchild;
                   
              }
              else if((temp->data)<no)// lahan data
              {
                   if (temp->Rchild==NULL)
                   {
                       temp->Rchild=newn;
                    break;
                   }
                    temp=temp->Rchild;
              }
              

              
              
            }
            
            
      }
}

bool Serach (PNODE Head,int no)
{
      bool flag=false;
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
                   flag=true;
                   break;
                }
                else if(no>(Head->data))
                {
                  Head=Head->Rchild;
                }
                else if(no<(Head->data))
                {
                  Head=Head->Lchild;
                }
          }
          return flag;
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

     cout<<"enter no to search\n";
     cin>>no;

     Serach(first,no);

     if(bret==true)
     {
           cout<<"Data is there \n";
     }
     else
     {
         cout<<"Data is not there\n";
     }

      return 0;
}