#include <iostream>
using namespace std;

int main() {
    int n = 5; // Number of rows (adjust as needed)
    
    // Outer loop for rows
    for(int i = 0; i < n; i++) {
        // Inner loop for columns
        for(int j = 0; j < n; j++) {
            // Condition to print '*' at the appropriate positions
            if (j == i || j == n - 1 - i)
                cout << "*";
            else
                cout << " ";
        }
        // Move to the next line after printing each row
        cout << endl;
    }
    
    return 0;
}
