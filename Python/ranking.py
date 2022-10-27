def ranking(nums):
    result =0
    n =len(nums)
    for i in range(n):
         Min,Max = nums[i],nums[i]

         for j in range(i,n,1):
             Min=min(Min,nums[j])
             Max=max(Max,nums[j])
             print(str(Min)+"----"+str(Max))
             if Max-Min >1:
                 result=result+1
         print("______")
    print("**")
    print(result)
    return result

if __name__ == '__main__':
   ranking([1,8,3,9])