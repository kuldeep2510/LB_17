import java.util.*;

class Program157
{
      public static void main(String arg[])
      {
         Marvellous mobj =new Marvellous();
       
         mobj.Accept();
         mobj.Display();

        boolean bret=mobj.CheakPallindrom();
        if(bret==true)
        {
              System.out.println("string is pallindrome");

        }
        else
        {
          System.out.println("string is not pallindrome");
        }
      }
}


class Marvellous extends StringX
{
     public boolean CheakPallindrom ()
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
         String newstr= new String(Arr);
         boolean bret=newstr.equals(str);

         return bret;
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