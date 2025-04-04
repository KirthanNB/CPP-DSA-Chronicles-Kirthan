#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string soln(string &rev)
{
    vector<int> temp = {0};
    for (int i = 0; i < rev.length(); i++)
    {
        if (rev[i] == ' ')
        {
            temp.push_back(i + 1);
        }
    }
    temp.push_back(rev.length() + 1);
    for (int i = 0; i < temp.size() - 1; i++)
    {
        reverse(rev.begin() + temp[i], (i + 1 == temp.size() - 1) ? rev.end() : rev.begin() + temp[i + 1] - 1);
    }
    return rev;
}

int main()
{
    string rev;
    cout << "Enter string to reverse words in string: ";
    getline(cin, rev);
    cout << "Solution: " << soln(rev) << endl;
    return 0;
}
