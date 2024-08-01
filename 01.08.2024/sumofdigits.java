import java.util.Scanner;

class sumofdigits {
    public static int sumOfDigits(int n) {
        int s = 0;  
        while (n > 0) {
            s += n % 10;  
            n /= 10;  
        }
        return s;
    }

    public static void main(String[] args) {
        Scanner ip = new Scanner(System.in);
        System.out.println("Enter the number : ");
        int n = ip.nextInt();
        int result = sumOfDigits(n);
        System.out.println("Sum of digits: " + result);  
    }
}
