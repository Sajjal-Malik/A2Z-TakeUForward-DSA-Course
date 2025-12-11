import java.util.Scanner;

// 1
// 2 2
// 3 3 3
// 4 4 4 4
// 5 5 5 5 5

public class Pattern_04_Right_Angled_Number_Pyramid_II {

    public static void printRightAngledNumberPatternII(int n) {
        // Outer loop controls the rows. It runs 'n' times (once for each row)
        for (int i = 1; i <= n; i++) {
            // Inner loop for columns, iterating up to the current row number 'i'
            for (int j = 1; j <= i; j++) {
                System.out.print(i + " ");
            }
            // Move to the next line after each row is complete
            System.out.println();
        }
    }

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the number of rows for the right-angled number pyramid pattern II: ");
        int n = scanner.nextInt();

        printRightAngledNumberPatternII(n);

        scanner.close();
    }

}
