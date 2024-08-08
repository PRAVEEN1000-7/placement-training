import java.util.Arrays;
import java.util.Scanner;

public class reversestr {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        System.out.print("Enter the first string: ");
        String a = s.nextLine();
        System.out.print("Enter the second string: ");
        String b = s.nextLine();
        
        if (isAnagram(a, b)) {
            System.out.println("The strings are anagrams.");
        } else {
            System.out.println("The strings are not anagrams.");
        }
        
        s.close();
    }
    
    public static boolean isAnagram(String a, String b) {
        if (a.length() != b.length()) {
            return false;
        }
        
        char[] c = a.toCharArray();
        char[] d = b.toCharArray();
        Arrays.sort(c);
        Arrays.sort(d);
        
        return Arrays.equals(c, d);
    }
}
