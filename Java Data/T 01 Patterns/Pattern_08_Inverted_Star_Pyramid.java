import java.util.Scanner;

// *********
//  *******
//   *****
//    ***
//     *

public class Pattern_08_Inverted_Star_Pyramid {

    public static void invertedStarPyramidPattern(int n) {
        // Outer loop controls the rows.
        for (int i = 1; i <= n; i++) {

            // First inner loop prints leading spaces.
            // The number of spaces increases with each row (i - 1)
            for (int j = 1; j <= i - 1; j++) {
                System.out.print(" ");
            }

            // Second inner loop prints the stars.
            // The number of stars decreases in each row. The total number of stars is 2*n -
            // (2*i - 1)
            for (int j = 1; j <= 2 * n - (2 * i - 1); j++) {
                System.out.print("*");
            }

            // (Optional) Third inner loop prints trailing spaces for symmetry
            for (int j = 1; j <= i - 1; j++) {
                System.out.print(" ");
            }

            // Move to the next line after the row is complete
            System.out.println();
        }
    }

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the number of rows for the inverted star pyramid pattern: ");
        int n = scanner.nextInt();

        invertedStarPyramidPattern(n);

        scanner.close();
    }
}
