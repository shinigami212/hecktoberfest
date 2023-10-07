def product_of_digits(number):
    number_str = str(number)
    product = 1
    for digit in number_str:
        product *= int(digit)
    return product

num = int(input("Enter a number: "))
result = product_of_digits(num)
print("The product of digits of", num, "is:", result)
