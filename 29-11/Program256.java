import java.util.Scanner;

class Searching 
{
   public void Change (int Arr[])
   {
      for (int i=0;i<Arr.length;i++)
      {
            Arr[i]++;
      }
   }
}


class Program256
{
      public static void main(String arr[])
      {


            Scanner sobj =new Scanner(System.in);
            System.out.println("Enter the size of Array");

            int size =sobj.nextInt();


            int Arr[]=new int [size];


            System.out.println("Enter the element");


            for (int i=0;i<Arr.length;i++)
            {
                  Arr[i]=sobj.nextInt();


            }
           
            obj.Change(Arr);
            
                  System.out.println("Data after fuction call");

                  for(int i=0;i<Arr.length;i++)
                  {
                        System.out.println(Arr[i]);
                  }
            
      }
}