import java.util.Scanner;

// 1      1
// 12    21
// 123  321
// 12344321

public class Pattern_12_Number_Crown_Pattern {

    public static void numberCrownPattern(int n) {

        int spaces = 2 * (n - 1);

        // Outer loop controls the rows
        for (int i = 1; i <= n; i++) {

            // Print the left increasing numbers
            for (int j = 1; j <= i; j++) {
                System.out.print(j);
            }

            // Print the middle spaces
            for (int j = 1; j <= spaces; j++) {
                System.out.print(" ");
            }

            // Print the right decreasing numbers
            for (int j = i; j >= 1; j--) {
                System.out.print(j);
            }

            // Move to the next line
            System.out.println();
            // Decrease the spaces for the next row
            spaces -= 2;
        }
    }

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the number of rows for the Number crown pattern: ");
        int n = scanner.nextInt();

        numberCrownPattern(n);

        scanner.close();
    }
}
