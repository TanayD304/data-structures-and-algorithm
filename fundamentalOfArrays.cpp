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

int findMaxConsecutiveOnes(vector<int> &nums)
{
    int size = nums.size();

    int maxi = 0;
    int count = 0;
    for(int i=0;i<size;i++) {
        if(nums[i]==1) {
            count++;
        }
        else {
            if(maxi<count) {
                maxi = count;
            }
            count=0;
        }
    }

    if (maxi < count)
    {
        maxi = count;
    }

    return maxi;
}

void rotateArrayByOne(vector<int> &nums)
{
    int size = nums.size();
    int temp = nums[0];

    for (int i = 0; i < size - 1; i++)
    {
        nums[i] = nums[i + 1];
    }

    nums[size - 1] = temp;
}

void rotateArrayBruteForce(vector<int> &nums, int k)
{
    int size = nums.size();
    k = k % size;

    for (int i = 0; i < k; i++)
    {
        rotateArrayByOne(nums);
    }
}

void rotateArrayBetter(vector<int> &nums, int k)
{
    int size = nums.size();
    k = k % size;
    vector<int> temp(size);

    for (int i = 0; i < size; i++)
    {
        if(i<k) {
            temp[((i-k)+2*size)%size] = nums[i];
        } else {
            temp[(i-k) % size] = nums[i];
        }
    }

    for (int i = 0; i < size; i++)
    {
        nums[i] = temp[i];
    }
}

void rotateArray(vector<int> &nums, int k)
{
    int size = nums.size();
    k = k % size;

    int count = 0;
    int i = 0;
    int pos,newPos, temp1, temp2;
    while(count<size) {
        pos = i;
        temp2 = nums[pos];
        do
        {
            if (pos < k)
            {
                newPos = ((pos - k) + 2 * size) % size;
            }
            else
            {
                newPos = (pos - k) % size;
            }
            temp1 = nums[newPos];
            nums[newPos] = temp2;
            temp2 = temp1;
            pos = newPos;
            count++;
        } while (pos != i);
        i++;
    }
}

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
    // printArray(nums);
    // rotateArrayByOne(nums);
    // printArray(nums);

    // Rotate array to left by k
    // printArray(nums);
    // rotateArrayBruteForce(nums, 2);
    // rotateArrayBetter(nums, 2);
    // rotateArray(nums, 2);
    // printArray(nums);

    return 0;
}