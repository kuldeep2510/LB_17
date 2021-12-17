import java.util.Scanner;

class Sorting
{
   public void BubbleSort(int Arr[])
   {
      int PASS=0,j=0,temp=0;
     int  size=Arr.length;
     boolean flag=false;
      for(PASS=0,flag=true;PASS<size && (flag==true);PASS++)
      {
           
        for(j=0,flag=false;j<size-PASS-1;j++)
        {
              if(Arr[j]>Arr[j+1])
              {
                    flag=true;
                    temp=Arr[j];
                    Arr[j]=Arr[j+1];
                    Arr[j+1]=temp;
              }
        }
        System.out.println("Data after pass"+PASS+1);
        for(int i=0;i<Arr.length;i++)
        {
          System.out.print(Arr[i]+" ");
        }
        System.out.println();

       
       
      }

   }
}


class Program259

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
              Sorting obj= new Sorting();
              obj.BubbleSort(Arr);
            
                  System.out.println("Data after fuction call");

                  for(int i=0;i<Arr.length;i++)
                  {
                        System.out.println(Arr[i]);
                  }
            
      }
}