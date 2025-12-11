import java.util.Scanner;

// F 
// E F
// D E F
// C D E F
// B C D E F
// A B C D E F 

public class Pattern_18_Alpha_Triangle_Pattern {

    public static void alphaTrianglePattern(int n) {
        char endChar = (char) ('A' + n - 1); // 'F' for n=6

        // Outer loop controls the rows
        for (int i = 1; i <= n; i++) {

            // Calculate the starting character of each row
            char startChar = (char) (endChar - (i - 1));

            // Print characters from startChar to endChar
            for (char character = startChar; character <= endChar; character++) {
                System.out.print(character + " ");
            }

            // Move to the next line
            System.out.println();
        }
    }

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the number of rows for the Alpha Triangle pattern: ");
        int n = scanner.nextInt();

        alphaTrianglePattern(n);

        scanner.close();

    }
}
