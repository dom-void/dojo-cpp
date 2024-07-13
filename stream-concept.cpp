// This code helped me to understand how std::cin stream works
#include <iostream>
using namespace std;

int main()
{  
  int sum, product, numbers;
  
  sum = 0;
  product = 1;
  
  cout << "Enter numbers separated by spaces" << endl << "(end the string with 0 or any other character): ";
  cin >> numbers;
  
  while (numbers != 0) {
      sum += numbers;
      product *= numbers;
      cout << numbers << ", ";
      cin >> numbers;
  }
  
  cout << endl << "Sum: " << sum << endl;
  cout << "Product: " << product;
}
