import java.util.Scanner;

public class TrianglePattern {

    // Function to print the triangle
    public static void printTriangle(int rows) {
        for (int i = 1; i <= rows; i++) {
            // Print i asterisks
            for (int j = 1; j <= i; j++) {
                System.out.print("*");
            }
            // Move to next line after each row
            System.out.println();
        }
    }

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        System.out.print("Enter number of rows: ");
        int rows = input.nextInt();

        printTriangle(rows);
    }
}

