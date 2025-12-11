import java.util.Scanner;

// * * * * *
// * * * *
// * * *
// * *
// *

public class Pattern_05_Inverted_Right_Pyramid {

    public static void invertedRightPyramidPattern(int n) {
        // Outer loop controls the rows. It runs 'n' times (once for each row)
        for (int i = 1; i <= n; i++) {
            // Inner loop for columns, printing stars based on the remaining number of rows
            for (int j = 1; j <= n - i + 1; j++) {
                System.out.print("* ");
            }
            // Move to the next line after each row is complete
            System.out.println();
        }
    }

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the number of rows for the inverted right pyramid pattern: ");
        int n = scanner.nextInt();

        invertedRightPyramidPattern(n);

        scanner.close();
    }
}
