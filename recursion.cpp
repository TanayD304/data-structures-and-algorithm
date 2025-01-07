#include <bits/stdc++.h>

using namespace std;

void printXNTimes(int x, int n) {
    // base
    if(n==0) return;

    // recursive
    cout<<x<<" ";
    printXNTimes(x, n-1);
}

void print1toN(int n) {
    // base
    if(n==0) return;

    // recursive
    print1toN(n-1);
    cout<<n<<endl;
}

void printNto1(int n) {
    // base
    if(n==0) return;

    // recursive
    cout<<n<<endl;
    printNto1(n-1);
}

// long long int factorial(int n)
// {
//     // your code goes here
// }

// int NnumbersSum(int N)
// {
//     // your code goes here
// }

// int arraySum(vector<int> &nums)
// {
//     // your code goes here
// }

// vector<char> reverseString(vector<char> &s)
// {
//     // your code goes here
// }

// bool palindromeCheck(string &s)
// {
//     // your code goes here
// }

// bool checkPrime(int num)
// {
//     // your code goes here
// }

// vector<int> reverseArray(vector<int> &nums)
// {
//     // your code goes here
// }

// bool isSorted(vector<int> &nums)
// {
//     // your code goes here
// }

// int addDigits(int num)
// {
//     // your code goes here
// }

// int fib(int n)
// {
//     // your code goes here
// }

int main()
{
    int x, n;
    cin>>x>>n;
    // printXNTimes(x, n);
    // print1toN(n);
    printNto1(n);
    return 0;
}