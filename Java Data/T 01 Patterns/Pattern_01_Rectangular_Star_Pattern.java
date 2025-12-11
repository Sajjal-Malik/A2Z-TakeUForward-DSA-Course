import java.util.Scanner;

// * * * * *
// * * * * *
// * * * * *
// * * * * *
// * * * * *

public class Pattern_01_Rectangular_Star_Pattern {
    public static void printRectangularStarPattern(int n) {
        // Outer loop controls the rows. It runs 'n' times (once for each row)
        for (int i = 1; i <= n; i++) {
            // Inner loop for columns, iterating up to the size of array 'n'
            for (int j = 1; j <= n; j++) {

                System.out.print("* ");
            }
            // Move to the next line after each row is complete
            System.out.println();
        }
    }

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the number of rows for the rectangular start pattern: ");
        int n = scanner.nextInt();

        printRectangularStarPattern(n);

        scanner.close();
    }
}
