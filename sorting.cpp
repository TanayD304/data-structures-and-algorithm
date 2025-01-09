#include<bits/stdc++.h>

using namespace std;

void printArray(vector<int> &nums) {
    for(int i=0;i<nums.size();i++) {
        cout<<nums[i]<<" ";
    }
    cout<<endl;
}

int main() {
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++) {
        cin>>nums[i];
    }
    printArray(nums);
    // function calls

    printArray(nums);
}