import java.util.Scanner;

// 1
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5

public class Pattern_03_Right_Angled_Number_Pyramid {

    public static void printRightAngledNumberPattern(int n) {
        // Outer loop controls the rows. It runs 'n' times (once for each row)
        for (int i = 1; i <= n; i++) {
            // Inner loop for columns, iterating up to the current row number 'i'
            for (int j = 1; j <= i; j++) {
                System.out.print(j + " ");
            }
            // Move to the next line after each row is complete
            System.out.println();
        }
    }

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the number of rows for the right-angled number pyramid pattern: ");
        int n = scanner.nextInt();

        printRightAngledNumberPattern(n);

        scanner.close();
    }
}
