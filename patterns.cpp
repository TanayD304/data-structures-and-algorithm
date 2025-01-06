#include <bits/stdc++.h>

using namespace std;

void pattern1(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void pattern2(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void pattern3(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}

void pattern4(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i;
        }
        cout << endl;
    }
}

void pattern5(int n)
{
    while (n > 0)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << "*";
        }
        cout << endl;
        n--;
    }
}

void pattern6(int n)
{
    while (n > 0)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << j;
        }
        cout << endl;
        n--;
    }
}

void pattern7(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << "*";
        }
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

void pattern8(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i - 1; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= 2 * n - 2 * i + 1; j++)
        {
            cout << "*";
        }
        for (int j = 1; j <= i - 1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

void pattern9(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << "*";
        }
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i - 1; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= 2 * n - 2 * i + 1; j++)
        {
            cout << "*";
        }
        for (int j = 1; j <= i - 1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

void pattern10(int n) {
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    n--;
    while (n > 0)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << "*";
        }
        cout << endl;
        n--;
    }
}

void pattern11(int n) {
    int flag;
    for (int i = 1; i <= n; i++)
    {
        flag = i%2;
        for (int j = 1; j <= i; j++)
        {
            cout << flag << " ";
            if(flag==1)flag=0;
            else flag=1;
        }
        cout << endl;
    }
}

void pattern12(int n) {
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=i;j++) {
            cout<<j;
        }
        for(int j=1;j<=2*n-2*i;j++) {
            cout<<" ";
        }
        for(int j=i;j>=1;j--) {
            cout<<j;
        }
        cout<<endl;
    }
}

void pattern13(int n) {
    int num = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<num << " ";
            num++;
        }
        cout<<endl;
    }
}

void pattern14(int n) {
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<(char)(64 + j);
        }
        cout<<endl;
    }
}

void pattern15(int n) {
    while (n > 0)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << (char)(64 + j);
        }
        cout << endl;
        n--;
    }
}

void pattern16(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << (char)(64 + i);
        }
        cout << endl;
    }
}

void pattern17(int n) {
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout<< " ";
        }
        int k = 1;
        while (k <= i)
        {
            cout << (char)(64 + k);
            k++;
        }
        k = i - 1;
        while (k >= 1)
        {
            cout << (char)(64 + k);
            k--;
        }
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

void pattern18(int n) {
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << (char)(64 + n-i+j)<<" ";
        }
        cout << endl;
    }
}

void pattern19(int n) {
    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j >= i; j--)
        {
            cout<<"*";
        }
        for (int j = 1; j < i; j++)
        {
            cout<<"  ";
        }
        for (int j = n; j >= i; j--)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        for (int j = 1; j <= n - i; j++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout<<endl;
    }
}

void pattern20(int n) {
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<"*";
        }
        for (int j = 1; j <= n - i; j++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    for (int i = 1; i <= n; i++)
    {
        if (i == 1)
            continue;
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout<<"*";
        }
        for (int j = 1; j < i; j++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}

void pattern21(int n) {
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == 1 || i == n || j == 1 || j == n)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout<<endl;
    }
}

void pattern22(int n) {
    int top, left, right, bottom;
    for (int i = 0; i < 2 * n - 1; i++)
    {
        for (int j = 0; j < 2 * n - 1; j++)
        {
            top = i;
            left = j;
            right = 2 * n - 2 - j;
            bottom = 2 * n - 2 - i;
            cout << (n - min(min(top, bottom), min(right, left)));
        }
        cout<<endl;
    }
}

int main()
{
    int n;
    cin >> n;
    pattern1(n);
    pattern2(n);
    pattern3(n);
    pattern4(n);
    pattern5(n);
    pattern6(n);
    pattern7(n);
    pattern8(n);
    pattern9(n);
    pattern10(n);
    pattern11(n);
    pattern12(n);
    pattern13(n);
    pattern14(n);
    pattern15(n);
    pattern16(n);
    pattern17(n);
    pattern18(n);
    pattern19(n);
    pattern20(n);
    pattern21(n);
    pattern22(n);
    return 0;
}