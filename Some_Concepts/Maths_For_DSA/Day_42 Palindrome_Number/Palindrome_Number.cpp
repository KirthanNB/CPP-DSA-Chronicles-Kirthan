#include <iostream>
using namespace std;
string soln(int n)
{
    int rev = 0, rem, temp = n;
    while (n > 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }
    return rev == temp ? "\nYes, the number is Palindrome" : "\nNo, the number is'nt Palindrome";
}
int main()
{
    int n;
    cout << "Enter number to be checked for Palindrome: ";
    cin >> n;
    cout << soln(n);
    return 0;
}