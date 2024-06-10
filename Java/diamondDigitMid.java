import java.util.*;

public class Main {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter size: ");
        int size = sc.nextInt();

        for (int i = 1; i <= size; i++) {
            for (int j = size-i; j >= 0; j--) {
                System.out.print(" ");
            }
            for (int k = 1; k <= i * 2 - 1; k++) {
                if (k == 1 || k == i * 2 - 1){
                System.out.print("*");
                } else if (i == size && i == k) {
                    System.out.print(size);
                } else {
                    System.out.print(" ");
                }
            }
            System.out.print("\n");
        }

        for (int i = size-1; i >= 0; i--) {
            for (int j = size-i; j >= 0; j--) {
                System.out.print(" ");
            }
            for (int k = 1; k <= i * 2 - 1; k++) {
                if (k == 1 || k == i * 2 - 1) {
                    System.out.print("*");
                } else {
                    System.out.printf(" ");
                }
            }
            System.out.print("\n");
        }
    }
}
