import 'dart:io';

void main() {
  stdout.write("Enter the number of terms for the Fibonacci series: ");
  int n = int.parse(stdin.readLineSync()!);

  print("Fibonacci Series up to $n terms:");
  if (n >= 1) {
    int first = 0;
    int second = 1;
    stdout.write("$first $second ");

    for (int i = 3; i <= n; i++) {
      int next = first + second;
      stdout.write("$next ");

      first = second;
      second = next;
    }
  } else if (n == 1) {
    stdout.write("0");
  }

  print("\n"); 
}
