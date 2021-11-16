#include<iostream>
using namespace std;

typedef struct node
{
      int data;
      struct node *next;
}NODE,*PNODE,**PPNODE;

  class SinglyLL
  {
        private:
        PNODE first;
        int size;

        public:
        SinglyLL()
        {
              first=NULL;
              size=0;

        }


        void InsertFirst(int no)
        {
           PNODE newn= new NODE;

           newn->data=no;
           newn->next=NULL;
           

           if (first==NULL)
           {
                first=newn;
           }
           else
           {
                 newn->next=first;
                 first=newn;
           }
           size++;
        }



   void InsertLast(int no)
   {
         PNODE newn=new NODE;

         newn->data=no;
         newn->next=NULL;

         if(first==NULL)
         {
               return;
         } 
         else
         {
               PNODE temp=first;

               while (temp->next!=NULL)
               {
                    temp=temp->next;
               }
               temp->next=newn;

               
         }
         size++;
   }
    void DeleteLast()
   {
         

         if(first==NULL)
         {
               return;
         } 
         if (first->next==NULL)
         {
             delete(first);
             first=NULL;

             size--;
         }
         
         else
         {
               PNODE temp=first;

               while (temp->next!=NULL)
               {
                    temp=temp->next;
               }
               delete temp->next;
               temp->next=NULL;


               size--;
         }
        
   }

   void DeleteFirst()
    {
        PNODE temp = first;
        
        if(first != NULL)
        {
            first = first->next;
            delete temp;
            
            size--;
        }
    }


   void InsertAtPos(int no,int ipos)
   {
         PNODE newn=new NODE;
         PNODE temp=first;
         int i=0;

         if((ipos<1)||(ipos>size+1))
         {
               return;
         }
         if(ipos==1)
         {
               InsertFirst(no);
               size++;
         }
         else if(ipos==size+1)
         {
               InsertLast(no);
               size++;
         }
         else
         {

               for(i=1;i<(ipos-1);i++)
               {
                     temp=temp->next;
               }
               newn->next=temp->next;
               temp->next=newn;

               size++;
         }
   }

    void DeleteAtPos(int ipos)
    {
          PNODE temp =first;
          PNODE targeted=NULL;
          int i=0;


          if((ipos<1)||(ipos<size+1))
          {
             return;
          }
          if(ipos==size)
          {
                DeleteLast();
                size--;
          }
          else
          {
                for ( i = 1; i < (ipos-1); i++)
                {
                     temp=temp->next;
                }
               targeted=temp->next;
               temp->next=targeted->next;
               delete targeted;
            
            size--;

          }
    }
    void Display()
    {
          PNODE temp=first;

          while (first->next!=NULL)
          {
               printf("|%d|->",temp->data);
               temp=temp->next;
          }
          cout<<"\n";
          
    }
    int Count()
    {
          return size;
    }

  };




int main()
{
      SinglyLL obj;

      int iret=0;

    obj.InsertFirst(12);
    obj.InsertFirst(51);
    obj.InsertFirst(21);
    obj.InsertFirst(11);

    iret = obj.Count();
    cout<<"Number of elemensts are : "<<iret<<"\n";
    

      return 0;

}