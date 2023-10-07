void main() {
  // Input a number
  print("Enter a number: ");
  int num = int.parse(stdin.readLineSync()!);

  // Calculate the product of its digits
  int result = productOfDigits(num);

  // Display the result
  print("The product of digits of $num is: $result");
}

int productOfDigits(int number) {
  String numberStr = number.toString();
  int product = 1;

  for (int i = 0; i < numberStr.length; i++) {
    int digit = int.parse(numberStr[i]);
    product *= digit;
  }

  return product;
}
