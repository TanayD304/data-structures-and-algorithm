#include <bits/stdc++.h>

using namespace std;

int countDigit(int n)
{
    int ans = 0;
    if(n==0) return 1;

    while(n>0) {
        ans++;
        n/=10;
    }

    return ans;
}

int countOddDigit(int n)
{
    int ans = 0;
    while (n > 0)
    {
        if (n % 10 % 2 == 1)
            ans++;
        n /= 10;
    }
    return ans;
}

int reverseNumber(int n)
{
    int newNum = 0;

    while (n > 0)
    {
        newNum *= 10;
        newNum += n % 10;
        n /= 10;
    }

    return newNum;
}

bool isPalindrome(int n)
{
    int revNum = reverseNumber(n);

    return n == revNum;
}

int largestDigit(int n)
{
    int largest = 0;

    while (n > 0)
    {
        if (largest < n % 10)
            largest = n % 10;
        n /= 10;
    }

    return largest;
}

int factorial(int n)
{
    if (n == 0 || n == 1)
        return 1;

    int ans = 1;
    while (n > 1)
    {
        ans *= n;
        n--;
    }

    return ans;
}

bool isArmstrong(int n)
{
    int len = countDigit(n);
    int temp = n;
    int ans = 0;
    while (n > 0)
    {
        ans += pow(n % 10, len);
        n /= 10;
    }

    return ans == temp;
}

bool isPerfectBf(int n)
{
    if (n == 1)
        return false;
    int ans = 1;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
            ans += i;
    }
    return ans == n;
}

bool isPerfectOt(int n)
{
    if (n == 1)
        return false;
    int ans = 1;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            ans += i;
            if (n / i != i)
                ans += n / i;
        }
    }
    return ans == n;
}

int main()
{
    int n;
    cin>>n;

    // cout<<countDigit(n);
    // cout<<countOddDigit(n);
    // cout<<reverseNumber(n);
    // cout<<isPalindrome(n);
    // cout<<largestDigit(n);
    // cout<<factorial(n);
    // cout<<isArmstrong(n);
    cout<<isPerfect(n);
    return 0;
}