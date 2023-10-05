def check_palindrome(string):
    for i in range(len(string)//2):
        if string[i] != string[len(string)-i-1]:
            return False
    return True

if __name__ == "__main__":
    
    s = str(input())

    if(check_palindrome(s)):
        print(s, "is a palindrome")
    else:
        print(s, "is not a palindrome")