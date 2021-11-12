import java.util.*;

class Program150
{
      public static void main(String arg[])
      {
         StringX sobj= new StringX();
         sobj.Accept();
         sobj.Display();
      }
}


class Marvellous
{
      public void Display(String Data)
      {
            System.out.println("welcome :"+Data);
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