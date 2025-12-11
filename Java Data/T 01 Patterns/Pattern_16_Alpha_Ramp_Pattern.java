import java.util.Scanner;

// A 
// B B
// C C C
// D D D D
// E E E E E

public class Pattern_16_Alpha_Ramp_Pattern {

    public static void alphaRamprTrianglePattern(int n) {
        char character = 'A';

        // Outer loop controls the rows
        for (int i = 1; i <= n; i++) {

            // Print the same character multiple times in the current row
            for (int j = 1; j <= i; j++) {
                System.out.print(character + " ");
            }

            // Move to the next line
            System.out.println();
            // Increment the character for the next row
            character++;
        }
    }

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the number of rows for the Alpha Ramp Triangle pattern: ");
        int n = scanner.nextInt();

        alphaRamprTrianglePattern(n);

        scanner.close();

    }
}
