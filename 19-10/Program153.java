import java.util.*;

class Program153
{
      public static void main(String arg[])
      {
         Marvellous mobj =new Marvellous();
       
         mobj.Accept();
         mobj.Display();

         String s=mobj.ReverseX();
         System.out.println("reverse string is:"+s);
      }
}


class Marvellous extends StringX
{
     public String ReverseX()
     {
           char Arr[]=str.toCharArray();
           int iStart=0,iEnd=Arr.length-1;
           char temp;

           while(iStart<iEnd)
           {
                 temp=Arr[iStart];
                 Arr[iStart]=Arr[iEnd];
                 Arr[iEnd]=temp;

                 iStart++;
                 iEnd--;
           }
           return new String(Arr);  //creates new object 
     }
}

class StringX
{
      public String str;

      public void Accept()
      {
            Scanner sobj=new Scanner(System.in);
            System.out.println("Enter String");
            str=sobj.nextLine();
      }

      public void Display()
      {
         System.out.println("string is:"+str);
      }
}