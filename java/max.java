import java.util.Scanner;
class max
{
    public static void main (String arry[])
    {
        
        int a,b;
        Scanner sc =new Scanner(System.in);
        System.out.println("enter a first number :");
        a = sc.nextInt();
        System.out.println("enter a secand number :");
        b = sc.nextInt();
        if(a>b)
        System.out.println("Max number :"+a);
        else 
        System.out.println("Max number :"+b);
    }
    }