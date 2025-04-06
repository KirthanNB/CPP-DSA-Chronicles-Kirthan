#include <iostream>
#include <vector>
using namespace std;
vector<int> solution(int &n)
{
    vector<int> soln;
    for (int j = 2; j <= n; j++)
    {
        int cond = 0;
        for (int i = 2; i * i <= n; i++)
        { // Check the iteration is starting from 2 while condition is for i*i<=n
            if (n % i == 0)
            {
                cond = 1;
                break;
            }
        }
        if (cond == 0)
        {
            soln.push_back(n);
        }
    }
    return soln;
}
int main()
{
    vector<int> num;
    int n;
    cout << "Enter number to check all prime numbers till: ";
    cin >> n;
    cout<<"Prime Numbers upto "<<n;
    for (int val : solution(n))
    {
        cout << "\n"
             << val;
    }
    return 0;
}