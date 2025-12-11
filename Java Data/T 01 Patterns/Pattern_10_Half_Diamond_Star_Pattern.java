import java.util.Scanner;

// *
// **
// ***
// ****
// *****
// ****
// ***
// **
// *

public class Pattern_10_Half_Diamond_Star_Pattern {

    public static void halfDiamondStarPyramidPattern(int n) {
        // The pattern has 2*n - 1 total rows
        for (int i = 1; i <= 2 * n - 1; i++) {

            // Determine how many stars to print for the current row 'i'
            // For the top half (i <= n), number of stars equals 'i'
            // For the bottom half (i > n), number of stars is calculated as 2*n - i.
            int stars;
            if (i > n) {
                stars = 2 * n - i;
            } else {
                stars = i;
            }

            // Print the required number of stars for this row
            for (int j = 1; j <= stars; j++) {
                System.out.print("*");
            }

            // Move to the next line after the row is complete
            System.out.println();
        }
    }

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the number of rows for the Half Diamond star pyramid pattern: ");
        int n = scanner.nextInt();

        halfDiamondStarPyramidPattern(n);

        scanner.close();
    }
}
