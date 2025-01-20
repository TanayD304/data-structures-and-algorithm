#include <bits/stdc++.h>

using namespace std;

class Solution
{

public:
    void printArray(vector<int> &nums)
    {
        for (int i = 0; i < nums.size(); i++)
        {
            cout << nums[i] << " ";
        }
        cout << endl;
    }

    vector<int> leaders(vector<int> &nums)
    {
        vector<int> ans;

        int size = nums.size();
        ans.push_back(nums[size - 1]);
        for (int i = size - 2; i >= 0; i--)
        {
            if (nums[i] > ans[ans.size() - 1])
            {
                ans.push_back(nums[i]);
            }
        }

        int start = 0;
        int end = ans.size() - 1;

        while (start < end)
        {
            swap(ans[start++], ans[end--]);
        }

        return ans;
    }
};

int main()
{
    vector<int> nums1 = {-3, 4, 5, 1, -30, -10};
    Solution sol;
    vector<int> ans = sol.leaders(nums1);
    sol.printArray(ans);
    return 0;
}