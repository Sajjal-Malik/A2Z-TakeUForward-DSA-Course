import java.util.Scanner;

// *          *
// **        **
// ***      ***
// ****    ****
// *****  *****
// ************
// *****  *****
// ****    ****
// ***      ***
// **        **
// *          *

public class Pattern_20_Symmetric_Butterfly_Pattern {

    public static void symmetricalButterflyPattern(int n) {
        int spaces = 2 * n - 2;

        // Upper half (including the widest middle line)
        for (int i = 1; i <= n; i++) {
            // Left stars
            for (int j = 1; j <= i; j++) {
                System.out.print("*");
            }

            // Middle spaces
            for (int j = 1; j <= spaces; j++) {
                System.out.print(" ");
            }

            // Right stars
            for (int j = 1; j <= i; j++) {
                System.out.print("*");
            }

            System.out.println();
            spaces -= 2;
        }

        // Lower half
        spaces = 2; // Reset spaces to start from bottom's top line

        for (int i = n - 1; i >= 1; i--) {
            // Left stars
            for (int j = 1; j <= i; j++) {
                System.out.print("*");
            }

            // Middle spaces
            for (int j = 1; j <= spaces; j++) {
                System.out.print(" ");
            }

            // Right stars
            for (int j = 1; j <= i; j++) {
                System.out.print("*");
            }

            System.out.println();
            spaces += 2;
        }
    }

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the number of rows for the Symmetrical Butterfly Void Pattern: ");
        int n = scanner.nextInt();

        symmetricalButterflyPattern(n);

        scanner.close();

    }
}
