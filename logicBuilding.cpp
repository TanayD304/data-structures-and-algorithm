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
    vector<int> nums = {0, 20, 0, -20, 0, 30};

    // Remove Duplicates from sorted Array
    // printArray(nums);
    // cout << removeDuplicates(nums) << endl;
    // printArray(nums);

    // Find Missing Number
    // cout << missingNumber(nums) << endl;

    // Move Zeros to end
    printArray(nums);
    moveZeroes(nums);
    printArray(nums);
    return 0;
}