Here is a Java code that calculates the average of n numbers:

```java
import java.util.Scanner;

public class Main {
  public static void main(String[] args) {
    Scanner input = new Scanner(System.in);
    System.out.print("Enter the number of elements: ");
    int n = input.nextInt();
    double[] arr = new double[n];
    double sum = 0;
    System.out.println("Enter the elements:");
    for (int i = 0; i < n; i++) {
      arr[i] = input.nextDouble();
      sum += arr[i];
    }
    double average = sum / n;
    System.out.println("The average of the entered numbers is " + average);
  }
}
```

