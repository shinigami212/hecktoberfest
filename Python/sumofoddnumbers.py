def sumodd(n):

    sum = 0

    for i in [i for i in range(n) if i%2!=0]:
        sum+=i
    return sum


if __name__ == '__main__':
    
    x = int(input("Enter a number: "))

    print(sumodd(x))