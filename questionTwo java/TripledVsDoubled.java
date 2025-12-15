import java.util.Scanner;

public class TripledVsDoubled {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        System.out.print("Enter first integer: ");
        int first = input.nextInt();
        System.out.print("Enter second integer: ");
        int second = input.nextInt();

        int tripled = first * 3;
        int doubled = second * 2;

        if (tripled % doubled == 0)
            System.out.println("Tripled first number is a multiple of doubled second number.");
        else
            System.out.println("Tripled first number is NOT a multiple of doubled second number.");
    }
}
