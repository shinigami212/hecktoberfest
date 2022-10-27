import sys
from collections import defaultdict


def getLengthOfOptimalCompression(s: str, k: int) -> int:
        def dp(start, k):
            if (start, k) in memo:
                return memo[(start, k)]
            if start == n or n - start <= k:
                return 0
            most_freq = 0
            count = defaultdict(int)
            ans = sys.maxsize

            for i in range(start, n):
                count[s[i]] += 1
                most_freq = max(most_freq, count[s[i]])

                compressed_length = 1 + (len(str(most_freq)) if most_freq > 1 else 0)
                if k >= i + 1 - start - most_freq:
                    ans = min(ans, compressed_length + dp(i + 1, k - (i + 1 - start - most_freq)))

            memo[(start, k)] = ans
            return ans

        n = len(s)
        memo = {}

        return dp(0, k)
if __name__ == '__main__':
      print(getLengthOfOptimalCompression("aaaabbaaaa",2))