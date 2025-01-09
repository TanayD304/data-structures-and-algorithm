#include<bits/stdc++.h>

using namespace std;

void printArray(vector<int> &nums) {
    for(int i=0;i<nums.size();i++) {
        cout<<nums[i]<<" ";
    }
    cout<<endl;
}

vector<int> selectionSort(vector<int> &nums)
{
    int minInd;
    int size = nums.size();

    for(int i=0;i<size-1;i++) {
        minInd = i;

        for(int j=i;j<size;j++) {
            if(nums[minInd]>nums[j]) {
                minInd = j;
            }
        }

        swap(nums[i], nums[minInd]);
    }

    return nums;
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
    // nums = selectionSort(nums);

    printArray(nums);
}