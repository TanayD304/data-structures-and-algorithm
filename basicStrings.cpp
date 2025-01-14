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

bool palindromeCheck(string &s)
{
    int start = 0;
    int end = s.size() - 1;

    while (start < end)
    {
        if(s[start++]!=s[end--]) return false;
    }

    return true;
}

int main()
{
    // Reverse a string
    // vector<char> s = {'t', 'a', 'n', 'a', 'y'};
    // printArray(s);
    // reverseString(s);
    // printArray(s);

    // Check Palidrome
    string s = "tanay";
    cout<<palindromeCheck(s)<<endl;
    s = "hannah";
    cout<<palindromeCheck(s)<<endl;
    return 0;
}