// Name - Arya Shahi
// PRN - 23070123030
// Aim - Performing Arithematic Operations using CPP Operators


#include <iostream>
using namespace std;

int main() {
    int a, b, sum, sub, prdt;
    float div;  
    
    cout << "Enter num 1: " << endl;
    cin >> a;
    cout << "Enter num 2: " << endl;
    cin >> b;

    sum = a + b;
    sub = a - b;
    prdt = a * b;
    div = a /b;
    

    cout << "Sum: " << sum << endl;
    cout << "Difference: " << sub << endl;
    cout << "Product: " << prdt << endl;
    cout << "Division: " << div << endl;

    return 0;
}

/* Output :
Enter num 1: 
200
Enter num 2: 
10
Sum: 210
Difference: 190
Product: 2000
Division: 20
*/