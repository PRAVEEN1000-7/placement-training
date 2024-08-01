import java.util.Scanner;

class fibonacci {
    public static void main(String[]args) {
        Scanner ip = new Scanner(System.in);
        System.out.print("Enter the range : \n\n");
        int range = ip.nextInt();
        int a=0,b=1,c=0;
        for (int i=0;i<=range;i++){
            System.out.println(a);
            c=a+b;
            a=b;
            b=c;
        }
        
    }
}
