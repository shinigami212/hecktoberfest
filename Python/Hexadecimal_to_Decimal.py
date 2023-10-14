hexadecimal_number = input("Enter a hexadecimal number: ")

try:
    decimal_number = int(hexadecimal_number, 16)
    print(f"The decimal equivalent of {hexadecimal_number} is {decimal_number}")
except ValueError:
    print("Invalid input. Please enter a valid hexadecimal number.")
