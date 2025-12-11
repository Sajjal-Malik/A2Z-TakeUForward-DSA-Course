import java.util.Scanner;

// *****
// *   *
// *   *
// *   *
// *****

public class Pattern_21_Hollow_Rectangle_Pattern {

    public static void hollowRectanglePattern(int n) {

        // Outer loop controls the rows
        for (int i = 1; i <= n; i++) {

            for (int j = 1; j <= n; j++) {

                // Check if the current position is on the border
                if (i == 1 || j == 1 || i == n || j == n) {
                    System.out.print("*");
                } else {
                    System.out.print(" ");
                }
            }

            // Move to the next line
            System.out.println();
        }
    }

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the size of the square (number of rows/columns): ");
        int n = scanner.nextInt();

        hollowRectanglePattern(n);

        scanner.close();

    }
}
