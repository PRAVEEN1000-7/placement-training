import java.util.Scanner;
class prime {
    public static void main(String[]args){
        Scanner ip = new Scanner(System.in);
        System.out.print("Enter the range :\n");
        int range = ip.nextInt();
        
        for(int i=1;i<=range;i++){
            int count=0;
            for(int j=1;j<=i;j++){
                if (i%j==0){
                    count++;
                }
                
            }
            if (count==2) {
                System.out.println(i);
            }
            
        }
        
    }
}
