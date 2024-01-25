import java .util.Scanner;
class calculator
{
    public static void main (String arr[])
    {
        int a,b,ch;
        Scanner sc= new Scanner (System.in);
        System.out.println("Enter a first number=");
        a=sc.nextInt();
        System.out.println("Enter a secand number=");
        b=sc.nextInt();
        System.out.println("Enter your choice 1-> Add 2->subtract 3->Multiply 4->divide \n Enter your choice =");
        ch=sc.nextInt();
        switch (ch)
         {
            case 1:
            System .out.println("Addition ="+(a+b));
            break;

            case 2:
            System .out .println("Subtactio="+(a-b));
            break;

            case 3:
            System.out.println("Multiplication="+(a*b));
            break;

            case 4:
            System.out .println("Divide= "+(a/b));
            break;
            default:
            System .out.println("Invalid choice");
            break;
        }
    }
    
}
