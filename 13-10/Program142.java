import java.util.Scanner;


class Program142
{


    public static void main (String arg[])
    {
        Scanner sobj= new Scanner(System.in);

        int iValue=0;
        boolean bret= false;

        System.out.println("Enter number");
        iValue=sobj.nextInt();
        
       
        Marvellous mobj= new Marvellous();
        bret=mobj.CheakPrime(iValue);

        if(bret==true)
        {
            System.out.println("It is prime number");
        }
        else
        {
            System.out.println("It is not prime number");
        }

    }
}

class Marvellous
{
   public boolean CheakPrime(int iNo)
   {
       int iCnt=0;
       int i=0;

       for(iCnt=2;iCnt<=iNo/2;iCnt++)
       {
         if((iNo%iCnt)==0)
         {
            i++;
             break;
         }
       }
       if(i==1)
       {
           return false;
       }
       else
       {
           return true;
       }       
  
       
   }   

}
