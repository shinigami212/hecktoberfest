# Addition
def add(x, y):
    return x + y

# Subtraction
def subtract(x, y):
    return x - y

# Multiplication
def multiply(x, y):
    return x * y

# Division
def divide(x, y):
    if y == 0:
        return "Cannot divide by zero"
    return x / y

if __name__ == "__main__":
    while True:
        print("\nOptions:\n"
              "Enter '1' for Addition\n"
              "Enter '2' for Subtraction\n"
              "Enter '3' for Multiplication\n"
              "Enter '4' for Division\n"
              "Enter '0' to Exit\n")

        choice = input("Enter your choice (1/2/3/4/0): ")

        if choice == "0":
            print("Thanks for using the Calculator :)")
            break

        if choice in ("1", "2", "3", "4"):
            num1 = float(input("Enter first number: "))
            num2 = float(input("Enter second number: "))

            if choice == "1":
                print("\nResult:", add(num1, num2))
            elif choice == "2":
                print("\nResult:", subtract(num1, num2))
            elif choice == "3":
                print("\nResult:", multiply(num1, num2))
            elif choice == "4":
                result = divide(num1, num2)
                if result == "Cannot divide by zero":
                    print("\n"+result)
                else:
                    print("\nResult:", result)
        else:
            print("Invalid input")
