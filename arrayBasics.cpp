#include<bits/stdc++.h>

using namespace std;

int sum(int arr[], int n)
{
    int ans = 0;
    for(int i=0;i<n;i++) {
        ans+=arr[i];
    }
    return ans;
}

int countOdd(int arr[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 1)
        {
            count++;
        }
    }
    return count;
}

void printArray(int arr[], int n) {
    for(int i=0;i<n;i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void reverse(int arr[], int n)
{
    int temp;
    for (int i = 0; i < n / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
}

bool arraySortedOrNot(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < arr[i - 1])
            return false;
    }
    return true;
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
    // cout<<sum(arr, n);
    // cout<<countOdd(arr, n);
    // printArray(arr, n);
    // reverse(arr, n);
    // printArray(arr, n);
    cout<<arraySortedOrNot(arr, n);
    return 0;
}