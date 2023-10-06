void main() {
  List<String> fruits = ['Apple', 'Banana', 'Orange'];
  print('Fruits: $fruits');

  // Adding a new fruit to the list
  fruits.add('Mango');
  print('Updated Fruits: $fruits');

  // Accessing elements by index
  print('First fruit: ${fruits[0]}');

  // Iterating through a list
  for (String fruit in fruits) {
    print('Fruit: $fruit');
  }
}
