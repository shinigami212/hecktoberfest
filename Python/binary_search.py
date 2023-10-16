def binary_search(arr, target):
    left, right = 0, len(arr) - 1

    while left <= right:
        mid = (left + right) // 2

        if arr[mid] == target:
            return mid  
        elif arr[mid] < target:
            left = mid + 1  
        else:
            right = mid - 1  
    return -1  

arr_str = input("Enter a sorted array of numbers (space-separated): ")
arr = list(map(int, arr_str.split()))

target = int(input("Enter the target element to search for: "))

result = binary_search(arr, target)

if result != -1:
    print(f"Element {target} found at index {result}")
else:
    print(f"Element {target} not found in the array")
