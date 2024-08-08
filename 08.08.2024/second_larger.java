import java.util.Scanner;

public class seclarg {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        System.out.print("Enter the number of elements in the array: ");
        int n = s.nextInt();
        int[] a = new int[n];
        
        System.out.println("Enter the elements of the array:");
        for (int i = 0; i < n; i++) {
            a[i] = s.nextInt();
        }
        
        int f = Integer.MIN_VALUE;
        int sec = Integer.MIN_VALUE;
        
        for (int i = 0; i < n; i++) {
            if (a[i] > f) {
                sec = f;
                f = a[i];
            } else if (a[i] > sec && a[i] != f) {
                sec = a[i];
            }
        }
        
        if (sec == Integer.MIN_VALUE) {
            System.out.println("There is no second largest element.");
        } else {
            System.out.println("The second largest element is: " + sec);
        }
        
        s.close();
    }
}
