import java.util.*;
class Solution {
    public void printList(ArrayList<Integer> ans) {
        for(int i=0;i<ans.size();i++) {
            System.out.print(ans.get(i) + " ");
        }
        System.out.println();
    }

    public void printArray(int[] nums) {
        for (int i = 0; i < nums.length; i++) {
            System.out.print(nums[i] + " ");
        }
        System.out.println();
    }

    public ArrayList<Integer> leaders(int[] nums) {
        ArrayList<Integer> ans = new ArrayList<>();

        int size = nums.length;
        ans.add(nums[size-1]);
        for (int i = size - 2; i >= 0; i--) {
            if (nums[i] > ans.get(ans.size()-1)) {
                ans.add(nums[i]);
            }
        }
        Collections.reverse(ans);
        return ans;
    }

    public int[] rearrangeArray(int[] nums) {
        int[] ans = new int[nums.length];

        int pos = 0;
        int neg = 1;

        for (int i = 0; i < nums.length; i++) {
            if (nums[i] > 0) {
                ans[pos] = nums[i];
                pos += 2;
            } else if (nums[i] < 0) {
                ans[neg] = nums[i];
                neg += 2;
            }
        }

        return ans;
    }
}

class mediumProblemsOnArrays {

    public static void main(String[] args) {
        int[] nums1 = {-3, 4, 5, 1, -30, -10};

        Solution sol = new Solution();
        // ArrayList<Integer> ans = sol.leaders(nums1);
        // sol.printList(ans);
        int[] ans = sol.rearrangeArray(nums1);
        sol.printArray(ans);
    }
}
