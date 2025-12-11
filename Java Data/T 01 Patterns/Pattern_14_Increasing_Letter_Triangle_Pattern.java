import java.util.Scanner;

// A
// A B
// A B C
// A B C D
// A B C D E

public class Pattern_14_Increasing_Letter_Triangle_Pattern {

    public static void increasingLetterTrianglePattern(int n) {

        // Outer loop controls the rows
        for (int i = 1; i <= n; i++) {

            // Iterate from 'A' to the appropriate character for the current row
            for (char character = 'A'; character <= 'A' + i - 1; character++) {
                System.out.print(character + " ");
            }

            // Move to the next line
            System.out.println();
        }
    }

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the number of rows for the increasing Letter Triangle pattern: ");
        int n = scanner.nextInt();

        increasingLetterTrianglePattern(n);

        scanner.close();

    }
}
