// Implement a program to check whether the given number is even number or odd number.
import java.util.Scanner;

public class LBP1 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();

        if (n < 0) {
            System.out.println("invalid");
        } else if (n % 2 == 0) {
            System.out.println("even");
        } else {
            System.out.println("odd");
        }
    }
}