import java.util.Scanner;

// 1 
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15

public class Pattern_13_Increasing_Number_Triangle_Pattern {

    public static void increasingNumberTrianglePattern(int n) {

        int number = 1;
        // Outer loop controls the rows
        for (int i = 1; i <= n; i++) {

            // Print consecutive numbers in the current row
            for (int j = 1; j <= i; j++) {
                System.out.print(number + " ");
                number += 1;
            }

            // Move to the next line
            System.out.println();
        }
    }

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the number of rows for the increasing Number Triangle pattern: ");
        int n = scanner.nextInt();

        increasingNumberTrianglePattern(n);

        scanner.close();

    }
}
