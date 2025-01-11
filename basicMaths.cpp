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

bool isPrime(int n)
{
    for (int i = 2; i*i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int primeUptoN(int n)
{
    int ans = 0;
    for(int i=2;i<=n;i++) {
        if(isPrime(n)) ans++;
    }

    return ans;
}

int GCDBetter(int n1, int n2)
{
    int range = min(n1, n2);
    int largest = 1;
    for(int i=2;i<=range;i++) {
        if(n1%i==0 && n2%i==0) largest = i;
    }

    return largest;
}

int GCDBf(int n1, int n2)
{
    int range = min(n1, n2);
    for(int i=range;i>1;i--) {
        if(n1%i==0 && n2%i==0) return i;
    }

    return 1;
}

int GCD(int n1, int n2)
{
    while(n1>0 && n2>0) {
        if(n1>n2) n1 = n1%n2;
        else n2 = n2%n1;
    }

    if(n1==0) return n2;
    return n1;
}

int LCM(int n1, int n2)
{
    return n1*n2/GCD(n1, n2);
}

vector<int> divisors(int n)
{
    vector<int>
    for(int i)
}

int main()
{
    return 0;
}