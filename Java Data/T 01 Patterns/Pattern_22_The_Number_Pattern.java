import java.util.Scanner;

// 4 4 4 4 4 4 4 
// 4 3 3 3 3 3 4
// 4 3 2 2 2 3 4
// 4 3 2 1 2 3 4
// 4 3 2 2 2 3 4
// 4 3 3 3 3 3 4 
// 4 4 4 4 4 4 4

public class Pattern_22_The_Number_Pattern {

    public static void theNumberPattern(int n) {
        int size = 2 * n - 1; // Total number of rows and columns

        // Outer loop controls the rows
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {

                // Calculate the minimum distance from any edge (top, bottom, left, right)
                int top = i;
                int left = j;
                int right = size - 1 - j;
                int bottom = size - 1 - i;

                // The minimum distance determines how far we are from the outer edge
                int minDistance = Math.min(Math.min(top, bottom), Math.min(left, right));

                // The value to print is n minus that minimum distance
                System.out.print(n - minDistance + " ");
            }
            System.out.println();
        }
    }

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the number of rows for the Number Pattern: ");
        int n = scanner.nextInt();

        theNumberPattern(n);

        scanner.close();

    }
}
