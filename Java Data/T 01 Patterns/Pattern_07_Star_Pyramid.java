import java.util.Scanner;

//     *
//    ***
//   *****
//  *******
// *********

public class Pattern_07_Star_Pyramid {

    public static void starPyramidPattern(int n) {
        // The outer loop controls the rows.
        for (int i = 1; i <= n; i++) {

            // First inner loop prints leading spaces to center the stars
            // The number of spaces decreases with each row.
            for (int j = 1; j <= n - i; j++) {
                System.out.print(" ");
            }

            // Second inner loop prints the stars.
            // The number of stars follows the sequence 1, 3, 5, 7... (2 * i - 1)
            for (int j = 1; j <= (2 * i - 1); j++) {
                System.out.print("*");
            }

            // (Optional) Third inner loop prints trailing spaces for perfect symmetry,
            // though not visually necessary in console output
            for (int j = 1; j <= n - i; j++) {
                System.out.print(" ");
            }

            // Move to the next line after the row is complete
            System.out.println();
        }
    }

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the number of rows for the star pyramid pattern: ");
        int n = scanner.nextInt();

        starPyramidPattern(n);

        scanner.close();
    }
}
