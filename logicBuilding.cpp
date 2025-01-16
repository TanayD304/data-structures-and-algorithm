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

int main()
{
    vector<int> nums = {-2, 2, 4, 4, 4, 4, 5, 5};

    // Remove Duplicates from sorted Array
    printArray(nums);
    cout<<removeDuplicates(nums)<<endl;
    printArray(nums);
    return 0;
}