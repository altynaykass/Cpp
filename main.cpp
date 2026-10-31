#include <iostream>
#include "math_utils.h"

using namespace std;

int main() {
    int a, b;
    
    cout << "First number: ";
    cin >> a;
    
    cout << "Second number: ";
    cin >> b;
    
    cout << "Sum: " << add(a, b) << endl;
    cout << "Product: " << multiply(a, b) << endl;
    
    return 0;
}
