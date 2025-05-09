#include <iostream>
using namespace std;

// Function to compute GCD using Euclidean Algorithm
int gcd(int a, int b) {
    if (b == 0)
        return a; // Base case
    return gcd(b, a % b); // Recursive step
}

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "GCD of " << num1 << " and " << num2 << " is " << gcd(num1, num2) << endl;
    return 0;
}
