def intToRoman(num: int) -> str:
        dp = {
            1: 'I',
            5: 'V',
            10: 'X',
            50: 'L',
            100: 'C',
            500: 'D',
            1000: 'M'
        }
        r = ""

        while num > 0:
            if num >= 1000:
                r += 'M'
                num -= 1000
            elif num >= 900 and num < 1000:
                r += 'CM'
                num -= 900
            elif num >= 500 and num < 900:
                r += 'D'
                num -= 500
            elif num >= 400 and num < 500:
                r += 'CD'
                num -= 400
            elif num >= 100 and num < 400:
                r += 'C'
                num -= 100
            elif num >= 90 and num < 100:
                r += 'XC'
                num -= 90
            elif num >= 50 and num < 90:
                r += 'L'
                num -= 50
            elif num >= 40 and num < 50:
                r += 'XL'
                num -= 40
            elif num >= 10 and num < 40:
                r += 'X'
                num -= 10
            elif num == 9:
                r += 'IX'
                num -= 9
            elif num >= 5 and num < 9:
                r += 'V'
                num -= 5
            elif num == 4:
                r += 'IV'
                num -= 4
            elif num >= 1 and num < 4:
                r += 'I'
                num -= 1
        return r

if __name__ == '__main__':
    print(intToRoman(1995))

