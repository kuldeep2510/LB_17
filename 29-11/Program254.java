import java.util.Scanner;

class Searching 
{
   public boolean LinearSearch(int Arr[],int no)
   {
         int i=0;

         for (i=0;i<Arr.length;i++)
         {
               if (Arr[i]==no)
                
               {
                 break;
                          
               }
               if(Arr.length==no)
               {
                  return false;
               }
               else
               {
                     return true;
               }
         }
   }
}


class Program254
{
      public static void main(String arr[])
      {


            Scanner sobj =new Scanner(system.in);
            System.out.println("Enter the size of Array");

            int size =sobj.nextInt();


            int Arr[]=new int [size];


            System.out.println("Enter the element");


            for (int i=0;i<Arr.length;i++)
            {
                  Arr[i]=sobj.nextInt();


            }

            System.out.println("Enter the element to search");
            nt value=sobj.nextInt();

            Sreaching obj=new Searching();


            boolean bret=obj.LinearSearch(Arr,value);


            if(bret==true)
            {
                  System.out.println("Element is there ");

            }
            else
            {
                  System.out.println("Element is not there");
            }
      }
}