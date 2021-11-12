#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node * next;

}NODE,*PNODE,**PPNODE;

void DIspaly(PNODE Head)
{

}
int Count(PNODE Head)
{
      return 0;
}
void InsertFirst(PPNODE Head,int no )
{


}
void InsertLast(PPNODE Head ,int no)
{

}
void DeleteFirst(PPNODE Head,int no)
{

}
void DeleteLast(PPNODE Head,int no)
{

}

int main()
{
      PNODE first=NULL;
      int iChoice=1,value=0,iRet=0,pos=0;

      while(iChoice!=0)
      {
            printf("Enter the desired operation that u want to perfrm on LL\n");
            printf("1:Insert the node at first position\n");
            printf("2:Insert the node at last position\n");
            printf("3:Insert the node at Desird position\n");
            printf("4:Delete the first node\n");
            printf("5:Delete the Last node\n");
            printf("6:Deelete the node at Desired position\n");
            printf("7:Display the content of LL\n");
            printf("8:count the number of nodes from LL\n");
            printf("0:Terminate the Application\n");
            printf("%d",&iChoice);
            printf("\n_______________________________________\n");

            switch(iChoice)
            {
                  case 1:
                  printf("Enter the data to insert \n");
                  scanf("%d",&value);
                  InsertFirst(&first,value);
                  break;



                    case 2:
                  printf("Enter the data to insert \n");
                  scanf("%d",&value);
                  InsertLast(&first,value);
                  break;


                  case 3:
                  printf("Enter the data to insert \n");
                  scanf("%d",&value);
                  printf("Enter the position\n");
                  scanf("%d",&pos);
                  //IsertAtPos(&first,value,pos);
                  break;


                     case 4:
                  DeleteFirst(&first);
                  break;
                  
                   case 5:
                  DeleteLast(&first);
                  break;


                  case 6:
                  printf("Enter the position\n");
                  scanf("%d",&pos);
                  DeleteAtpos(&first,pos);
                  break;


                  case 7:
                  printf("Element of LL are\n");
                  DIspaly(first);
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