import java.util.Scanner ;

public class addnum {
    public static void main(String[]args) {
        
        Scanner sj = new Scanner(System.in);
        
        System.out.print("Enter the a : ");
        int a = sj.nextInt();
        System.out.println("Enter the  :");
        int b = sj.nextInt();
        
        double c = a + b ;
        System.out.println("the added value of "+a+"and"+b+"is :"+c);
        sj.close();
        
    }
}
