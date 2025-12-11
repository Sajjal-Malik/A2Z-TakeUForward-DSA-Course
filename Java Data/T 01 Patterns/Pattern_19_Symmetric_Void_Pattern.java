import java.util.Scanner;

// **********
// ****  ****
// ***    ***
// **      **
// *        *
// *        *
// **      **
// ***    ***
// ****  ****
// **********

public class Pattern_19_Symmetric_Void_Pattern {

    public static void symmetricalVoidPattern(int n) {
        int spaces = 0;

        // Top half of the pattern
        for (int i = 1; i <= n; i++) {

            // Left stars
            for (int j = 1; j <= n - i + 1; j++) {
                System.out.print("*");
            }

            // Middle spaces
            for (int j = 0; j < spaces; j++) {
                System.out.print(" ");
            }

            // Right stars
            for (int j = 1; j <= n - i + 1; j++) {
                System.out.print("*");
            }

            System.out.println();
            spaces += 2;
        }

        spaces = 2 * n - 2;

        // Bottom half of the pattern
        for (int i = 1; i <= n; i++) {

            // Left stars
            for (int j = 1; j <= i; j++) {
                System.out.print("*");
            }

            // Middle spaces
            for (int j = 0; j < spaces; j++) {
                System.out.print(" ");
            }

            // Right stars
            for (int j = 1; j <= i; j++) {
                System.out.print("*");
            }

            System.out.println();
            spaces -= 2;
        }
    }

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the number of rows for the Symmetrical Void Pattern (per half): ");
        int n = scanner.nextInt();

        symmetricalVoidPattern(n);

        scanner.close();

    }
}
