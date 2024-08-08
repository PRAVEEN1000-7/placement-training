import java.util.Scanner;

public class reversestr {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        System.out.print("Enter a string: ");
        String str = s.nextLine();
        
        String r = "";
        for (int i = str.length() - 1; i >= 0; i--) {
            r += str.charAt(i);
        }
        
        System.out.println("Reversed string: " + r);
        
        s.close();
    }
}
