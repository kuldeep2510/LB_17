#include<iostream>
using namespace std;

typedef struct node
{
    int data;
    struct node *next;
}NODE, *PNODE;

class Queue     // Singly Linear Linked List
{
private:
    PNODE first;
    int size;
    
public:
    Queue()
    {
        first = NULL;
        size = 0;
    }
    
    void Enqueue(int no)   // InsertLast()
    {
       PNODE newn=new NODE;
       PNODE temp=first;
       newn->data=no;
       newn->next=NULL;

       if (first==NULL)
       {
          first=newn;
       }
       else
       {
           while (temp->next!=NULL)
           {
              temp=temp->next;
           }
           temp->next=newn;
           
       }
       
       size++;

    }
    
    int Dequeue()   // DeleteFirst()
    {
        PNODE temp=first;
      int  Data1=0;
      if (first==NULL)
      {
         return 0;
      }
      else
      {
         first=first->next;
         Data1=first->data;
         delete temp;
         size--;
      }

      return Data1;
    }
    
    void Display()
    {
        PNODE temp=first;
        for (int i =1; i <=size; i++)
        {
           printf("|%d|-->",temp->data);
           temp=temp->next;
        }
        printf("\n");
    }
    
    int Count()
    {
        return size;
    }
};

int main()
{
    Queue obj;
    
    obj.Enqueue(11);
    obj.Enqueue(21);
    obj.Enqueue(51);
    obj.Enqueue(101);
    
    int iret = obj.Dequeue();       // 11
    cout<<iret<<"\n";                     // 11
    
    obj.Display();          // 11       21          51
    iret = obj.Count();     // 3
    
    cout<<"Size of queue is : "<<iret<<"\n";        // 3
    
    return 0;
}
