import java.util.Scanner;

class factorial {
    public static void main(String[]args) {
        Scanner ip = new Scanner(System.in);
        System.out.print("Enter the range : \n\n");
        int num = ip.nextInt();
        int f=1;
        for (int i=1;i<=num;i++){
            f=f*i;
        }
        System.out.print("the factorial of "+num+" : "+f);
        
    }
}
