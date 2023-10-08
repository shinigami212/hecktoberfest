import java.util.Scanner;

public class primeNumberCheck {
    public static void main(String[] args) {
        System.out.println("Enter the number to check: ");
        Scanner in = new Scanner(System.in);
        int inputNum = in.nextInt();
        checkPrimeNumber(inputNum);
        in.close();
    }

    static void checkPrimeNumber(int num){
        int counter = 0;
        for(int i = 1; i * i <= num; i++){
            if(num % i == 0){
                counter++;
                if(num / i != i) counter++;
            }
        }
        if(counter == 2) System.out.println(num + " is prime number");
        else System.out.println(num + " is not prime number");
    }
}
