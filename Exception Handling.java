import java.util.Scanner;

public class TryCatchCalculator {

    public void divideNumbers() {

        Scanner input = new Scanner(System.in);

        try {

            System.out.print("Enter first number: ");
            int a = input.nextInt();

            System.out.print("Enter second number: ");
            int b = input.nextInt();

            int result = a / b;

            System.out.println("Result = " + result);

        }

        catch (ArithmeticException e) {

            System.out.println("Cannot divide by zero.");

        }

        finally {

            System.out.println("Program Finished.");

        }

    }

    public static void main(String[] args) {

        TryCatchCalculator obj = new TryCatchCalculator();
        obj.divideNumbers();

    }
}
