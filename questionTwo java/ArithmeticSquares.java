import java.util.Scanner;
public class ArithmeticSquares {
    public static int square(int num) {
        return num * num;
    }

}

public static int sumOfSquares(int number1, int number2) {
    return square(number1) + square(number2);
}


public static int differenceOfSquares(int a, int b) {
    return square(a) - square(a);
}

public static void main(String[] args) {
    Scanner input = new Scanner(System.in);

    System.out.print("Enter first integer: ");
    int num1 = input.nextInt();

    System.out.print("Enter second integer: ");
    int num2 = input.nextInt();

    System.out.println("Square of first number: " + square(num1));
    System.out.println("Square of second number: " + square(num2));
    System.out.println("Sum of squares: " + sumOfSquares(num1, num2));
    System.out.println("Difference of squares: " + differenceOfSquares(num1, num2));
}
