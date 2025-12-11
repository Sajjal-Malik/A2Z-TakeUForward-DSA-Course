import java.util.Scanner;

//     A    
//    ABA
//   ABCBA
//  ABCDCBA
// ABCDEDCBA

public class Pattern_17_Alpha_Hill_Pattern {

    public static void alphaHillPyramidPattern(int n) {

        // Outer loop controls the rows
        for (int i = 1; i <= n; i++) {

            // Print leading spaces
            for (int j = 1; j <= n - i; j++) {
                System.out.print(" ");
            }

            char character = 'A';
            // Calculate the breakpoint for increasing/decreasing characters
            int breakpoint = (2 * i + 1) / 2;

            // Print the letter palindrome part
            for (int j = 1; j <= (2 * i - 1); j++) {
                System.out.print(character);
                if (j < breakpoint) {
                    character++;
                } else {
                    character--;
                }
            }

            // Print trailing spaces (optional, for consistency with original C++ code)
            for (int j = 1; j <= n - i; j++) {
                System.out.print(" ");
            }

            // Move to the next line
            System.out.println();
        }
    }

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the number of rows for the Alpha Hill pyramid pattern: ");
        int n = scanner.nextInt();

        alphaHillPyramidPattern(n);

        scanner.close();

    }
}
