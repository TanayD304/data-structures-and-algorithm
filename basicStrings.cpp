#include <bits/stdc++.h>

using namespace std;

void printArray(vector<char> &nums)
{
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;
}

void reverseString(vector<char> &s)
{
    int start = 0;
    int end = s.size()-1;

    while(start<end) {
        swap(s[start++], s[end--]);
    }
}

int main()
{
    vector<char> s = {'t', 'a', 'n', 'a', 'y'};
    printArray(s);
    reverseString(s);
    printArray(s);

    return 0;
}