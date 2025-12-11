import java.util.Scanner;

//     *
//    ***
//   *****
//  *******
// *********
// *********
//  *******
//   *****
//    ***
//     *

public class Pattern_09_Diamond_Star_Pattern {

    /**
     * Prints the top half (a standard centered pyramid) of the diamond pattern
     */
    public static void starPyramidPattern(int n) {
        // Loops through each row for the top half
        for (int i = 1; i <= n; i++) {

            // Prints leading spaces
            for (int j = 1; j <= n - i; j++) {
                System.out.print(" ");
            }

            // Prints stars (1, 3, 5, etc.).
            for (int j = 1; j <= (2 * i - 1); j++) {
                System.out.print("*");
            }

            // Prints trailing spaces
            for (int j = 1; j <= n - i; j++) {
                System.out.print(" ");
            }
            // Prints a newline after the row is done
            System.out.println();
        }
    }

    /**
     * Prints the bottom half (an inverted centered pyramid) of the diamond pattern
     */
    public static void invertedStarPyramidPattern(int n) {
        // Loops through each row for the bottom half
        for (int i = 1; i <= n; i++) {

            // Prints leading spaces
            for (int j = 1; j <= i - 1; j++) {
                System.out.print(" ");
            }

            // Prints stars (total 2*n - (2*i - 1))
            for (int j = 1; j <= 2 * n - (2 * i - 1); j++) {
                System.out.print("*");
            }
            // Prints trailing spaces
            for (int j = 1; j <= i - 1; j++) {
                System.out.print(" ");
            }

            // Prints a newline after the row is done
            System.out.println();
        }
    }

    /**
     * Combines the top and bottom halves to print a complete diamond pattern
     */
    public static void diamondStarPyramidPattern(int n) {
        starPyramidPattern(n);
        invertedStarPyramidPattern(n);
    }

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the number of rows for the Diamond star pyramid pattern: ");
        int n = scanner.nextInt();

        diamondStarPyramidPattern(n);

        scanner.close();
    }
}
