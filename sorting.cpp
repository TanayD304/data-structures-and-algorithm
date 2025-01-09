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
    // nums = bubbleSort(nums);
    // nums = insertionSort(nums);

    printArray(nums);
}