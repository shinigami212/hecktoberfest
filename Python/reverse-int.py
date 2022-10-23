if __name__ == "__main__":
    _s = str(1563847412)
    isNeg = False
    if "-" in _s:
        isNeg = True
        _s = _s[1:]
    _s = _s[::-1]
    if _s[0] == "0":
        _s = _s[1:]
    print(_s)
    if _s == "":
        print("0")
    _i = int(_s)
    if isNeg:
        _i = _i * -1

    maxL = pow(2,32) - 1
    minL = -pow(2,31)
    if _i > maxL:
        print("0")
    if _i < minL:
        print("0")
    print(str(_i))
