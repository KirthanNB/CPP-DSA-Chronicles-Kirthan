#include <iostream>
using namespace std;

const int MOD = 1e9 + 7;
long long modPow(long long a, long long b, int mod) {
    long long result = 1;
    a %= mod;
    while (b > 0) {
        if (b % 2 == 1)
            result = (result * a) % mod;
        a = (a * a) % mod;
        b /= 2;
    }
    return result;
}
int main() {
    long long a = 1000000000;
    long long b = 2000000000;
    cout << "Modulo: " << MOD << "\n\n";
    cout << "(a + b) % MOD = " << (a + b) % MOD << "\n";
    cout << "(a - b + MOD) % MOD = " << (a - b + MOD) % MOD << "\n";
    cout << "(a * b) % MOD = " << (a * b) % MOD << "\n";
    cout << "a^b % MOD = " << modPow(a, 5, MOD) << "\n";
    return 0;
}
