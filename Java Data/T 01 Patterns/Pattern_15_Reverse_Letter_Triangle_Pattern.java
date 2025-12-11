import java.util.Scanner;

// B C D E 
// A B C D
// A B C
// A B
// A

public class Pattern_15_Reverse_Letter_Triangle_Pattern {

    public static void reverseLetterTrianglePattern(int n) {

        // Outer loop controls the rows
        for (int i = 1; i <= n; i++) {

            // Iterate from 'A' up to the character determined by n and i
            for (char character = 'A'; character <= 'A' + (n - i); character++) {
                System.out.print(character + " ");
            }

            // Move to the next line
            System.out.println();
        }
    }

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the number of rows for the Reverse Letter Triangle pattern: ");
        int n = scanner.nextInt();

        reverseLetterTrianglePattern(n);

        scanner.close();
    }
}
