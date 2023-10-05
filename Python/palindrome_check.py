def check_pelindrome(string):
    for i in range(len(string)//2):
        if string[i] != string[len(string)-i-1]:
            return False
    return True

if __name__ == "__main__":
    
    s = str(input())

    if(check_pelindrome(s)):
        print(s, "is a pelindrome")
    else:
        print(s, "is not a pelindrome")