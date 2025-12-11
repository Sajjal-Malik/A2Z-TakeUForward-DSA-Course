import java.util.Scanner;

// *
// * *
// * * *
// * * * *
// * * * * *

public class Pattern_02_Right_Angled_Triangle_Pattern {
    public static void printRightAngledTrianglePattern(int n) {
        // Outer loop controls the rows. It runs 'n' times (once for each row)
        for (int i = 1; i <= n; i++) {
            // Inner loop for columns, iterating up to the current row number 'i'
            for (int j = 1; j <= i; j++) {

                System.out.print("* ");
            }
            // Move to the next line after each row is complete
            System.out.println();
        }
    }

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the number of rows for the right-angled triangle pattern: ");
        int n = scanner.nextInt();

        printRightAngledTrianglePattern(n);

        scanner.close();
    }
}
