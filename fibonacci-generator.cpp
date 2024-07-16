#include <iostream>
#include <iomanip>

#define COLUMNS 5
#define SPACE 20

using namespace std;

int main()
{
    unsigned long long int prev, curr, next;
    
    int counter, n;
    
    cout << "Number of Fibonacci numbers: " << endl;
    cin >> n;
    
    prev = 0;
    curr = 1;
    
    cout << setw(SPACE) << prev << setw(SPACE) << curr;
    
    if (n > 90) n = 90;
    
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
