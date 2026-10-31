#include <iostream>
#include <iomanip>

using namespace std;


void swapValues(int* first, int* second);
void printStatistics(const int* data, int size);

typedef int (*Operation)(int, int);

// functions for Task 6
int add(int a, int b) { return a + b; }
int subtract(int a, int b) { return a - b; }
int multiply(int a, int b) { return a * b; }
int divide(int a, int b) { return a / b; }

int main() {
    
    // Task 1
    cout << "--- Task 1 ---\n";
    int org;
    cout << "Value: ";
    cin >> org;
    
    int* Val = &org;

    cout << "Original value: " << *Val << "\n";
    
    int upd;
    cout << "New value: ";
    cin >> upd;
    *Val = upd; 
    cout << "Updated value: " << *Val << "\n\n";

    // Task 2
    cout << "--- Task 2 ---\n";
    int num1, num2;
    cout << "First number: ";
    cin >> num1;
    cout << "Second number: ";
    cin >> num2;
    
    swapValues(&num1, &num2); 
    cout << "After swap: " << num1 << " " << num2 << "\n\n";

    
    // Task 3: 
    cout << "--- Task 3 ---\n";
    int statArray[5];
    cout << "Enter 5 integers: ";
    for(int i = 0; i < 5; ++i) {
        cin >> statArray[i];
    }
    printStatistics(statArray, 5); 
    cout << "\n";

   
    // Task 4
    cout << "--- Task 4 ---\n";
    int dynSize;
    cout << "Size: ";
    cin >> dynSize;
    
    int* dynArray = new int[dynSize]; 
    cout << "Values: ";
    for(int i = 0; i < dynSize; ++i) {
        cin >> *(dynArray + i);
    }
    
    int sumPos = 0;
    int countPos = 0;
    cout << "Positive values: ";
    for(int i = 0; i < dynSize; ++i) {
        if (*(dynArray + i) > 0) {
            cout << *(dynArray + i) << " ";
            sumPos += *(dynArray + i);
            countPos++;
        }
    }
    cout << "\n";
    
    if (countPos > 0) {
        double avg = (double)sumPos / countPos;
        cout << "Average: " << fixed << setprecision(2) << avg << "\n";
    } else {
        cout << "No positive values.\n";
    }
    
    delete[] dynArray; 
    cout << "\n";

    
    // Task 5:
    cout << "--- Task 5 ---\n";
    int rows, cols;
    cout << "Rows: ";
    cin >> rows;
    cout << "Columns: ";
    cin >> cols;
    
    int** matrix = new int*[rows]; 
    cout << "Matrix:\n";
    for(int i = 0; i < rows; ++i) {
        matrix[i] = new int[cols]; 
        for(int j = 0; j < cols; ++j) {
            cin >> *(*(matrix + i) + j);
        }
    }
    
    for(int i = 0; i < rows; ++i) {
        int rowSum = 0;
        for(int j = 0; j < cols; ++j) {
            rowSum += *(*(matrix + i) + j);
        }
        cout << "Row " << i << " sum: " << rowSum << "\n";
    }
    
    for(int i = 0; i < rows; ++i) {
        delete[] matrix[i];
    }
    delete[] matrix;
    cout << "\n";

    
    // Task 6: 
    cout << "--- Task 6 ---\n";
    Operation ops[4] = {add, subtract, multiply, divide}; 
    int a, b, opCode;
    
    cout << "First number: ";
    cin >> a;
    cout << "Second number: ";
    cin >> b;
    cout << "Operation: ";
    cin >> opCode;
    
    if (opCode >= 1 && opCode <= 4) {
        if (opCode == 4 && b == 0) {
            cout << "Error: Division by zero\n";
        } else {
            int result = ops[opCode - 1](a, b); 
            cout << "Result: " << result << "\n";
        }
    } else {
        cout << "Error: Invalid operation number\n";
    }

    return 0;
}


// realization of functions for Task 2 and Task 3

void swapValues(int* first, int* second) {
    int temp = *first;
    *first = *second;
    *second = temp;
}

void printStatistics(const int* data, int size) {
    if (size <= 0) return;
    
    int sum = 0;
    int minVal = *data;
    int maxVal = *data;
    
    for(int i = 0; i < size; ++i) {
        int current = *(data + i); 
        sum += current;
        if (current < minVal) minVal = current;
        if (current > maxVal) maxVal = current;
    }
    
    cout << "Sum: " << sum << "\n";
    cout << "Minimum: " << minVal << "\n";
    cout << "Maximum: " << maxVal << "\n";
}
