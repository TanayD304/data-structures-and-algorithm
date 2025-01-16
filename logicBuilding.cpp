#include <bits/stdc++.h>

using namespace std;

void printArray(vector<int> &nums)
{
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;
}

int removeDuplicates(vector<int> &nums)
{
    int size = nums.size();

    int lastUniqueIndex = 0;
    int indexToInsert = 1;
    for (int i = 1; i < size; i++)
    {
        if (nums[i] != nums[lastUniqueIndex])
        {
            nums[indexToInsert++] = nums[i];
            lastUniqueIndex = i;
        }
    }

    return indexToInsert;
}

int missingNumber(vector<int> &nums)
{
    int size = nums.size();

    int ans = size;
    for (int i = 0; i < size; i++)
    {
        ans = ans ^ nums[i] ^ i;
    }

    return ans;
}

vector<int> unionArray(vector<int> &nums1, vector<int> &nums2)
{
    int size1 = nums1.size();
    int size2 = nums2.size();

    int i = 0;
    int j = 0;

    vector<int> ans;

    while(i<size1 && j<size2) {
        if(nums1[i]<nums2[j]) {
            if(ans.size()==0 || nums1[i]!=ans[ans.size()-1]) {
                ans.push_back(nums1[i]);
            }
            i++;
        }
        else if (nums1[i] > nums2[j]) {
            if (ans.size() == 0 || nums2[j] != ans[ans.size() - 1])
            {
                ans.push_back(nums2[j]);
            }
            j++;
        } else {
            if (ans.size() == 0 || nums2[j] != ans[ans.size() - 1])
            {
                ans.push_back(nums2[j]);
            }
            j++;
            i++;
        }
    }

    while(i<size1) {
        if (ans.size() == 0 || nums1[i] != ans[ans.size() - 1])
        {
            ans.push_back(nums1[i]);
        }
        i++;
    }

    while(j<size2) {
        if (ans.size() == 0 || nums2[j] != ans[ans.size() - 1])
        {
            ans.push_back(nums2[j]);
        }
        j++;
    }

    return ans;
}

void moveZeroes(vector<int> &nums)
{
    int size = nums.size();

    int posNonZero = 0;
    for (int i = 0; i < size; i++)
    {
        if (nums[i] != 0)
        {
            nums[posNonZero++] = nums[i];
        }
    }

    while (posNonZero < size)
    {
        nums[posNonZero++] = 0;
    }
}

int main()
{
    vector<int> nums1 = {1, 2, 3, 4, 5};
    vector<int> nums2 = {1, 2, 7};

    // Remove Duplicates from sorted Array
    // printArray(nums);
    // cout << removeDuplicates(nums) << endl;
    // printArray(nums);

    // Find Missing Number
    // cout << missingNumber(nums) << endl;

    // Move Zeros to end
    // printArray(nums);
    // moveZeroes(nums);
    // printArray(nums);

    // Union of 2 Arrays
    vector<int> ans = unionArray(nums1, nums2);
    printArray(ans);
    return 0;
}