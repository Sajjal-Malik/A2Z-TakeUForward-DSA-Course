import java.util.Scanner;

// 1 2 3 4 5 6
// 1 2 3 4 5
// 1 2 3 4
// 1 2 3
// 1 2
// 1

public class Pattern_06_Inverted_Numbered_Right_Pyramid {
    public static void invertedNumberRightPyramidPattern(int n) {

        // Outer loop controls the rows. It runs 'n' times (once for each row)
        for (int i = 1; i <= n; i++) {

            // Inner loop controls the columns (numbers printed in the current row
            // 'n - i + 1 times'
            for (int j = 1; j <= n - i + 1; j++) {
                System.out.print(j + " ");
            }
            // Move to the next line after each row is complete
            System.out.println();
        }
    }

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter the number of rows for the inverted number right pyramid pattern: ");

        int n = scanner.nextInt();

        invertedNumberRightPyramidPattern(n);

        scanner.close();
    }
}
