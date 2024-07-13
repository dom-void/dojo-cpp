#include <iostream>
#include <iomanip>

#define COLUMNS 5
#define SPACE 13

using namespace std;

int main()
{
  // generates up to 48 correct Fibonacci numbers:
  // unsigned int prev, curr, next;
  
  // Generates rounded Fibonacci numbers starting from 32nd:
  long double prev, curr, next;
  
  int counter, n;
  
  cout << "Number of Fibonacci numbers: " << endl;
  cin >> n;
  
  prev = 0;
  curr = 1;
  
  cout << setw(SPACE) << prev << setw(SPACE) << curr;
  
  for (counter = 3; counter <= n; counter++) {
      next = prev + curr;
      prev = curr;
      curr = next;
      
      cout << setw(SPACE) << curr;
      
      if (counter % COLUMNS == 0) {
          cout << endl;
      }
  }
}
