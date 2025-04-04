#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool issame(int freq[], int windfreq[])
{
    for (int i = 0; i < 26; i++)
    {
        if (freq[i] != windfreq[i])
        {
            return false;
        }
    }
    return true;
}

bool soln(string &str, string &part)
{
    int freq[26] = {0};
    for (int i = 0; i < str.length(); i++)
    {
        int indx = str[i] - 'a';
        freq[indx]++;
    }

    int windsize = str.length();
    for (int i = 0; i <= part.length() - windsize; i++)
    {
        int windind = 0, ind = i;
        int windfreq[26] = {0};

        while (windind < windsize)
        {
            windfreq[part[ind] - 'a']++;
            windind++;
            ind++;
        }

        if (issame(freq, windfreq))
        {
            return true;
        }
    }
    return false;
}

int main()
{
    string str, part;
    cout << "Enter Your Main String: ";
    getline(cin, str);
    cout << "Enter your string to be checked: ";
    cin >> part;
    cout << "\nSolution: " << soln(str, part);
    return 0;
}
