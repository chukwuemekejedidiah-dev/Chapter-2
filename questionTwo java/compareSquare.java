
import java.util.Scanner;

public class compareSquare {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.print("Enter an integer: ");
        int num = input.nextInt();
        int square = num * num;

        System.out.printf("You entered: %d, Square: %d%n", num, square);

        if (num > 100) System.out.println("Number is greater than 100");
        if (num < 100) System.out.println("Number is less than 100");
        if (num == 100) System.out.println("Number is equal to 100");
        if (num != 100) System.out.println("Number is not equal to 100");

        if (square > 100) System.out.println("Square is greater than 100");
        if (square < 100) System.out.println("Square is less than 100");
        if (square == 100) System.out.println("Square is equal to 100");
        if (square != 100) System.out.println("Square is not equal to 100");
    }
}


