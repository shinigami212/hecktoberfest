# Largest Element: Find and display the largest element in a list.

def largest_element(list):
    largest = list[0]
    for i in range(1, len(list)):
        if list[i] > largest:
            largest = list[i]
    return largest


if __name__ == "__main__":

    list = [int(x) for x in input().split()]
    print(largest_element(list))
