#python program to check if the number is an armstrong number or not
# take input from the user
num=int(input("enter a number:"))

#initialize sum 
sum=0
#find the sum of the cube of each digit 
temp=num
while temp>0:
  digit=temp%10
  sum+=digit**3
  temp//=10

#display the result 
if num==sum:
  print(num,"is an armstrong number")
else:
  print(num,"is not an armstrong number")
