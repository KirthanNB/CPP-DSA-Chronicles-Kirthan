// Inplace solution-->Space Complexity-O(1)
// Time Complexity-O(n)
// Though it seems like code is being traversed twice but still updates a single iterater so it remains O(n)
#include <iostream>
#include <string>
using namespace std;

string soln(string inp)
{
    int indx = 0; // Position for writing the result
    int n = inp.length();

    for (int i = 0; i < n;)
    { // Notice: No i++ here
        int freq = 0;
        char ch = inp[i];

        // Count the frequency of the current character
        while (i < n && inp[i] == ch)
        {
            freq++;
            i++;
        }

        // Store the character
        inp[indx++] = ch;

        // Store the frequency if greater than 1
        if (freq > 1)
        {
            string str = to_string(freq);
            for (char val : str)
            {
                inp[indx++] = val;
            }
        }
    }

    // Resize the string to remove leftover characters
    inp.resize(indx);

    return inp;
}

int main()
{
    string inp;
    cout << "Enter your string to be processed: ";
    getline(cin, inp);

    cout << "Compressed string: " << soln(inp) << endl;

    return 0;
}
