#include<bits/stdc++.h>

using namespace std;

int linearSearch(vector<int> &nums, int target)
{
    for(int i=0;i<nums.size();i++) {
        if(nums[i]==target) return i;
    }
    return -1;
}

int main() {
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++) {
        cin>>nums[i];
    }

    // linear search
    int target;
    cin>>target;
    cout<<linearSearch(nums, target);

    return 0;
}