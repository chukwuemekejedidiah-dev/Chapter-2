 import java.util.Scanner;

public class ASCII {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        System.out.print("Enter a character: ");
        char c = input.next().charAt(0);
        {
            System.out.printf("The integer value of '%c' is %d%n", c, (int) c);
        }
    }

}
