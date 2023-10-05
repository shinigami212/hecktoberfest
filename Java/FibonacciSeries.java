import java.util.Scanner;

public class FibonacciSeries {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the number of terms for the Fibonacci series: ");
        int n = scanner.nextInt();

        System.out.println("Fibonacci Series up to " + n + " terms:");
        if (n >= 1) {
            int first = 0;
            int second = 1;
            System.out.print(first + " " + second + " ");

            for (int i = 3; i <= n; i++) {
                int next = first + second;
                System.out.print(next + " ");

                first = second;
                second = next;
            }
        } else if (n == 1) {
            System.out.print("0");
        }

        System.out.println(); 
        scanner.close();
    }
}
