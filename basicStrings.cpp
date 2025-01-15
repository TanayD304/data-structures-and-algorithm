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
    int end = s.size() - 1;

    while (start < end)
    {
        swap(s[start++], s[end--]);
    }
}

bool palindromeCheck(string &s)
{
    int start = 0;
    int end = s.size() - 1;

    while (start < end)
    {
        if (s[start++] != s[end--])
            return false;
    }

    return true;
}

string largeOddNum(string &s)
{
    int j = s.size() - 1;

    while (j >= 0)
    {
        if (s[j] == '1' || s[j] == '3' || s[j] == '5' || s[j] == '7' || s[j] == '9')
        {
            break;
        }
        j--;
    }

    int i = 0;

    while (i < s.size())
    {
        if (s[i] != '0')
        {
            break;
        }
        i++;
    }

    return s.substr(i, j - i + 1);
}

string longestCommonPrefix(vector<string> &str)
{
    sort(str.begin(), str.end());

    int maxLCPLength = min(str[0].size(), str[str.size() - 1].size());

    int i = 0;
    string ans = "";

    while (i < maxLCPLength)
    {
        if (str[0][i] == str[str.size() - 1][i])
        {
            ans += str[0][i];
        }
        else
        {
            return ans;
        }
        i++;
    }

    return ans;
}

bool isomorphicString(string s, string t)
{
    vector<char> freqS(26, 0);
    vector<char> freqT(26, 0);

    for(int i=0;i<s.size();i++) {
        if(freqS[(int)s[i]-97]!=freqT[(int)t[i]-97]) return false;

        freqS[s[i] - 97] = i+1;
        freqT[t[i] - 97] = i+1;
    }

    return true;
}

bool rotateString(string &s, string &goal)
{
    s = s+s;
    if(s.find(goal)!=string::npos) return true;
    return false;
}

bool anagramStrings(string &s, string t)
{
    if (s.size() != t.size())
        return false;
    vector<int> freq(26, 0);

    for(int i=0;i<s.size();i++) {
        freq[s[i]-97]++;
        freq[t[i] - 97]--;
    }

    for(int i=0;i<26;i++) {
        if(freq[i]!=0) return false;
    }

    return true;
}

bool comparator(pair<int, char> &p1, pair<int, char> &p2) {
    if(p1.first>p2.first) return true;
    if(p1.first<p2.first) return false;
    return p1.second < p2.second;
}

vector<char> frequencySort(string &s)
{
    vector<pair<int, char>> freq(26);
    for(int i=0;i<26;i++) {
        freq[i].first = 0;
        freq[i].second = i;
    }

    for(int i=0;i<s.size();i++) {
        freq[s[i]-97].first++;
    }

    sort(freq.begin(), freq.end(), comparator);

    int i = 0;
    vector<char> ans;
    while(i<26 && freq[i].first>0) {
        ans.push_back(freq[i].second + 97);
        i++;
    }

    return ans;

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
    // string s = "5347";
    // cout<<largeOddNum(s)<<endl;
    // s = "0214638";
    // cout<<largeOddNum(s)<<endl;
    // s = "0032579";
    // cout<<largeOddNum(s)<<endl;

    // Longest Common Prefix
    // vector<string> s = {"flowers",
    //                     "flow",
    //                     "fly",
    //                     "flight"};
    // cout << longestCommonPrefix(s) << endl;
    // vector<string> s1 = {"dog",
    //                      "cat",
    //                      "animal",
    //                      "monkey"};
    // cout << longestCommonPrefix(s1) << endl;

    // Isomorphic String
    // string s = "add";
    // string t = "egg";
    // cout<<isomorphicString(s, t)<<endl;

    // s = "apple";
    // t = "bbnbm";
    // cout<<isomorphicString(s, t)<<endl;

    // Rotate String
    // string s = "abcde";
    // string t = "cdeab";
    // cout<<rotateString(s, t)<<endl;
    // s = "abcde";
    // t = "adeac";
    // cout<<rotateString(s, t)<<endl;

    // Valid Anagram
    // string s = "anagram";
    // string t = "naagram";
    // cout<<anagramStrings(s, t)<<endl;
    // s = "cat";
    // t = "dog";
    // cout<<anagramStrings(s, t)<<endl;

    // Sort Characters by Frequency
    // string s = "tree";
    // vector<char> ans = frequencySort(s);
    // printArray(ans);
    return 0;
}