#include <bits/stdc++.h>

using namespace std;

void printArray(vector<int> &nums) {
    for(int i=0;i<nums.size();i++) {
        cout<<nums[i]<<" ";
    }
    cout<<endl;
}

// int linearSearch(vector<int> &nums, int target)
// {
//     // your code goes here
// }

// int largestElement(vector<int> &nums)
// {
// }

// int secondLargestElement(vector<int> &nums)
// {
//     // your code goes here
// }

// int findMaxConsecutiveOnes(vector<int> &nums)
// {
// }

void rotateArrayByOne(vector<int> &nums)
{
    int size = nums.size();
    int temp = nums[0];

    for(int i=0;i<size-1;i++) {
        nums[i] = nums[i+1];
    }

    nums[size-1] = temp;
}

// void rotateArray(vector<int> &nums, int k)
// {
// }

int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    // Rotate array to left by 1
    printArray(nums);
    rotateArrayByOne(nums);
    printArray(nums);

    return 0;
}