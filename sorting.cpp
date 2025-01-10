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

vector<int> bubbleSort(vector<int> &nums)
{
    int size = nums.size();

    for(int i=0;i<size-1;i++) {
        for(int j=0;j<size-1-i;j++) {
            if(nums[j]>nums[j+1]) {
                swap(nums[j], nums[j+1]);
            }
        }
    }

    return nums;
}

vector<int> insertionSort(vector<int> &nums)
{
    int size = nums.size();
    int temp;
    int pos;

    for(int i=1;i<size;i++) {
        pos = i-1;
        temp = nums[i];

        while(pos>=0 && nums[pos]>temp) {
            nums[pos+1] = nums[pos];
            pos--;
        }

        pos++;

        nums[pos] = temp;

    }

    return nums;
}

void merge(vector<int> &nums, int start, int end, int mid) {
    // temp array
    vector<int> temp(end-start+1);
    int tempPos = 0;
    int i = start;
    int j = mid+1;

    // placing elements in sorted order
    while(i<=mid && j<=end) {
        if(nums[i]<nums[j]) {
            temp[tempPos++]=nums[i++];
        } else {
            temp[tempPos++] = nums[j++];
        }
    }

    // leftover from left
    while(i<=mid) {
        temp[tempPos++] = nums[i++];
    }

    // leftover from right
    while(j<=end) {
        temp[tempPos++] = nums[j++];
    }

    // copy back
    int numsPos = start;
    for(int i=0;i<temp.size();i++) {
        nums[numsPos++] = temp[i];
    }
}
void divide(vector<int> &nums, int start, int end) {
    // base
    if(start>=end) return;

    // recursive
    int mid = (start + end)/2;

    // left half
    divide(nums, start, mid);
    // right half
    divide(nums, mid+1, end);

    // merge call
    merge(nums, start, end, mid);
}


vector<int> mergeSort(vector<int> &nums)
{
    divide(nums, 0, nums.size()-1);

    return nums;
}

int findPartitionIndex(vector<int> &nums, int low, int high) {
    int pivot = low;
    int i = low;
    int j = high;

    while(i<j) {
        while(nums[i]<=nums[pivot] && i<high) i++;
        while(nums[j]>nums[pivot] && j>low) j--;
        if(i<j) swap(nums[i], nums[j]);
    }
    swap(nums[low], nums[j]);
    return j;
}

void recursion(vector<int> &nums, int low, int high)
{
    // base
    if(low>=high) return;

    // recursion
    int partition = findPartitionIndex(nums,low,high);
    recursion(nums, low, partition-1);
    recursion(nums, partition+1, high);
}

vector<int> quickSort(vector<int> &nums)
{
    recursion(nums, 0, nums.size()-1);

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
    nums = selectionSort(nums);
    nums = bubbleSort(nums);
    nums = insertionSort(nums);
    nums = mergeSort(nums);
    nums = quickSort(nums);
    printArray(nums);
}