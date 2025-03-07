#include <iostream>
#include <vector>
using namespace std;
int solution(vector<int> &num)
{
    int temp, buy, sell, ans = 0, n = num.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            temp = ans;
            ans = max(num[j] - num[i], ans);
            if (ans != temp)
            {
                buy = i + 1;
                sell = j + 1;
            }
        }
    }
    return ans;
}
int main()
{
    vector<int> num;
    int n, temp;
    cout << "Enter number of elements: ";
    cin >> n;
    cout << "Enter " << n << " elements: \n";
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        num.push_back(temp);
    }
    cout << "\n"
         << solution(num);
    return 0;
}