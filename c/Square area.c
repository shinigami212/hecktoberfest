//Program to calculate and display the area of a square given its side length. //
include < stdio.h >
 int main() 
{ 
  float area, side; 
  printf("Enter the length of side of a square\n"); 
  scanf("%f", &side);
  area = side * side;  
  printf("Area of the Square is %0.2f \n", area); 
  return 0; 
}
