#include <bits/stdc++.h>

using namespace std;

void printXNTimes(int x, int n)
{
    // base
    if (n == 0)
        return;

    // recursive
    cout << x << " ";
    printXNTimes(x, n - 1);
}

void print1toN(int n)
{
    // base
    if (n == 0)
        return;

    // recursive
    print1toN(n - 1);
    cout << n << endl;
}

void printNto1(int n)
{
    // base
    if (n == 0)
        return;

    // recursive
    cout << n << endl;
    printNto1(n - 1);
}

long long int factorial(int n)
{
    // base
    if (n <= 1)
        return 1;

    // recursive
    return n * factorial(n - 1);
}

int NnumbersSum(int N)
{
    // base
    if (N == 1)
        return 1;

    // recursive
    return N + NnumbersSum(N - 1);
}

int arraySumRecursive(vector<int> &nums, int n)
{
    // base
    if (n == 0)
        return nums[0];

    // recursive
    return nums[n] + arraySumRecursive(nums, n - 1);
}

int arraySum(vector<int> &nums)
{
    return arraySumRecursive(nums, nums.size() - 1);
}

void reverseStringRecursive(vector<char> &s, int start, int end)
{
    // base
    if (start >= end)
        return;

    // recursive
    swap(s[start], s[end]);
    reverseStringRecursive(s, start + 1, end - 1);
}

vector<char> reverseString(vector<char> &s)
{
    reverseStringRecursive(s, 0, s.size() - 1);
    return s;
}

bool palindromeCheckRecursive(string &s, int start, int end)
{
    // base
    if (start >= end)
        return true;
    if (s[start] != s[end])
        return false;

    // recursive
    return palindromeCheckRecursive(s, start + 1, end - 1);
}

bool palindromeCheck(string &s)
{
    return palindromeCheckRecursive(s, 0, s.size() - 1);
}

bool checkPrimeRecursive(int num, int div)
{
    // base
    if (num == 1)
        return false;
    if (num == div)
        return true;
    if (num % div == 0)
        return false;

    // recursive
    return checkPrimeRecursive(num, div + 1);
}

bool checkPrime(int num)
{
    return checkPrimeRecursive(num, 2);
}

void reverseArrayRecursive(vector<int> &nums, int start, int end)
{
    // base
    if (start >= end)
        return;

    // recursive
    swap(nums[start], nums[end]);
    return reverseArrayRecursive(nums, start + 1, end - 1);
}

vector<int> reverseArray(vector<int> &nums)
{
    reverseArrayRecursive(nums, 0, nums.size() - 1);
    return nums;
}

bool isSortedRecursive(vector<int> &nums, int n)
{
    // base
    if (n == 0)
        return true;
    if (nums[n] < nums[n - 1])
        return false;

    // recursive
    return isSortedRecursive(nums, n - 1);
}

bool isSorted(vector<int> &nums)
{
    return isSortedRecursive(nums, nums.size() - 1);
}

int addDigitsRecursive(int num) {
    int ans = 0;
    while(num>0) {
        ans+= num%10;
        num/=10;
    }
    return ans;
}

int addDigits(int num)
{
    // base
    if(num<10) return num;

    // recursive
    return addDigits(addDigitsRecursive(num));
}

int fib(int n)
{
    // base
    if(n==0 || n==1) return n;

    // recursive
    return fib(n-1) + fib(n-2);
}

int main()
{
    return 0;
}