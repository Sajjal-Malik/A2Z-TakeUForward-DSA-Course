import java.util.Scanner;

// 0      
// 1 0    
// 0 1 0  
// 1 0 1 0   
// 0 1 0 1 0 

public class Pattern_11_Binary_Number_Triangle_Pattern {

    public static void binaryNumberPyramidPattern(int n) {
        // Outer loop controls the rows
        for (int i = 1; i <= n; i++) {

            // Determine the starting digit (0 or 1) for the current row based on parity of
            // 'i'
            // Even rows start with 1, odd rows start with 0
            int start;
            if (i % 2 == 0) {
                start = 1;
            } else {
                start = 0;
            }

            // Inner loop controls the columns (numbers printed in the current row)
            // It runs 'i' times
            for (int j = 1; j <= i; j++) {

                // Print the current starting number.
                System.out.print(start + " ");

                // Toggle the number for the next position in the row (0 becomes 1, 1 becomes
                // 0)
                start = 1 - start;
            }

            // Move to the next line after the row is complete
            System.out.println();
        }
    }

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the number of rows for the Binary Number pyramid pattern: ");
        int n = scanner.nextInt();

        binaryNumberPyramidPattern(n);

        scanner.close();
    }
}
