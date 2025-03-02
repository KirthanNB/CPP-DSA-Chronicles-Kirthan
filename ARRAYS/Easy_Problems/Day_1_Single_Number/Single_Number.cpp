//Key Takeaways!!
//a^a=0(^ = Bitwise XOR)
//a^0=a

#include <iostream>
#include <vector>
using namespace std;
int solution(vector<int> num)
{
    int ans=0;
    for (int val : num)
    {
        ans= ans ^ val;  //Bitwise XOR to cancel out same numbers
    }
    return ans;
}
int main()
{
    vector<int> num;
    int n, temp;
    cout<<"Enter number of elements: ";
    cin >> n;
    cout << "Enter " << n << " elements: \n";
    for(int i=0; i<n; i++){
        cin >> temp;
        num.push_back(temp);
    }
    cout<<"\n"<<solution(num);
    return 0;
}