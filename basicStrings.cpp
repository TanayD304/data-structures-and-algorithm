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

string largeOddNum(string &s)
{
    int j = s.size()-1;

    while(j>=0) {
        if (s[j] == '1' || s[j] == '3' || s[j] == '5' || s[j] == '7' || s[j] == '9') {
            break;
        }
        j--;
    }

    int i = 0;

    while(i<s.size()) {
        if(s[i]!='0') {
            break;
        }
        i++;
    }

    return s.substr(i, j-i+1);
}

int main()
{
    // Reverse a string
    // vector<char> s = {'t', 'a', 'n', 'a', 'y'};
    // printArray(s);
    // reverseString(s);
    // printArray(s);

    // Check Palidrome
    // string s = "tanay";
    // cout<<palindromeCheck(s)<<endl;
    // s = "hannah";
    // cout<<palindromeCheck(s)<<endl;

    // Largest odd number in a string
    string s = "5347";
    cout<<largeOddNum(s)<<endl;
    s = "0214638";
    cout<<largeOddNum(s)<<endl;
    s = "0032579";
    cout<<largeOddNum(s)<<endl;
    return 0;
}