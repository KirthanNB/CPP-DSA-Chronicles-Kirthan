#include <iostream>
using namespace std;

// Sum of natural numbers
int sumOfNaturalNumbers(int n) {
    if (n == 0)
        return 0;
    return n + sumOfNaturalNumbers(n - 1);
}

int main() {
    int n;

    // Sum of natural numbers example
    cout << "Enter a number for Sum of Natural Numbers: ";
    cin >> n;
    cout << "Sum of first " << n << " natural numbers = " << sumOfNaturalNumbers(n) << endl;

    return 0;
}
