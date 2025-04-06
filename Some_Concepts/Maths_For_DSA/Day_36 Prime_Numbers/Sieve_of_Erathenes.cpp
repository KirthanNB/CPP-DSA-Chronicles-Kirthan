#include <iostream>
#include <vector>
using namespace std;
vector<int> solution(int &n)
{
    vector<int> soln;
    vector<bool> sol(n+1, true);
    for(int i=2; i<n; i++){
        if(sol[i]){
            soln.push_back(i);
            for(int j=i*2; j<n; j+=i){
                sol[j]=false;
            }
        }
    }
    return soln;
}
int main()
{
    vector<int> num;
    int n, i=1;
    cout << "Enter number to check all prime numbers till: ";
    cin >> n;
    cout << "Prime Numbers upto " << n << endl;
    for (int val : solution(n))
    {
        cout << "\n"
             << i <<": "<<val;
             i++;
    }
    return 0;
}