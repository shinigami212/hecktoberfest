void main() {
  // Input a hexadecimal number
  print("Enter a hexadecimal number: ");
  String hexNumber = stdin.readLineSync()!;

  // Convert hexadecimal to decimal
  try {
    int decimalNumber = int.parse(hexNumber, radix: 16);
    print("The decimal equivalent of $hexNumber is: $decimalNumber");
  } catch (e) {
    print("Invalid hexadecimal input.");
  }
}
