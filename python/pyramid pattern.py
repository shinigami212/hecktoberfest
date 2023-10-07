#python 3.x code to demonstrate star pattern
# function to demonstrate printing pattern
def pypart(n):
  #outer loop to handle number of rows
  #n in this case 
  for i in range (0,n):
    #inner loop to handle number of columns
    #values changing acc. to outer loop
    for j in range(0,i+1):
      #printing stars
      print("*", end="")
      #ending line after each row 
      print("\r")
      #driver code
n=5
pypart(n)
    
