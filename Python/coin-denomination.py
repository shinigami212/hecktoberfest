def minCount(coins,n,dp):
    if n==0 :
        return 0
    ans = 222222222222222222
    for c in coins:
        if n-c >=0:
            if dp[n-c]!=-1:
                subAns = dp[n-c]
            else:
                subAns = minCount(coins, n - c,dp)
            if subAns!=222222222222222222 and subAns+1 < ans:
                 ans = subAns+1
    dp[n] =ans
    return ans

def totalCount(coins,n,sum):
    if n<=0 :
        return 0
    if sum < 0:
        return 0
    if sum ==0:
        return 1
    return totalCount(coins,n-1,sum)+totalCount(coins,n,sum-coins[n-1])

if __name__=="__main__":
    coins=[1,2,3]
    amount = 6
    dp = [-1]*(amount+1)
    dp[0]=0
    print(str(minCount(coins,amount,dp)))
    print(str(totalCount(coins,len(coins),amount)))


