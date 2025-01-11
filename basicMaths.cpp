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

int main()
{
    int n;
    cin>>n;

    cout<<countDigit(n);
    return 0;
}