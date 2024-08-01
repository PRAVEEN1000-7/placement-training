import java.util.Scanner;

class pattern {
    public static void main(String[]args) {
        Scanner ip = new Scanner(System.in);
        System.out.print("Enter the range : \n\n");
        int num = ip.nextInt();
        for(int i=1;i<=num;i++)
    {
        for(int j=1;j<=i;j++)
        {
            System.out.print("* \t");
        }
        System.out.print("\n");
    }
        
    }
}
