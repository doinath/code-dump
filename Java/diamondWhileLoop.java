import java.util.*;
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        System.out.print("How many lines: ");
        var size = sc.nextInt();
        int i = 1, j = size, k = 1;
        
            //upper diamond
            while(i <= 5) {
                j = size - i;
                while(j >= 0) {
                    System.out.print(" ");
                    j--;
                }
                
                k = 1;
                while(k <= i * 2 - 1) {
                    System.out.print("*");
                    k++;
                }
                System.out.println();
                i++;
            }
            
            //lower diamond
            
            i = size-1; j = size; k = 1;
            while(i >= 0) {
                j = size - i;
                while(j >= 0) {
                    System.out.print(" ");
                    j--;
                }
                    
                k = 1;
                while(k <= i * 2 - 1) {
                    System.out.print("*");
                    k++;
                }
                System.out.println();
                i--;
            }
            
        sc.close();
    }
}
