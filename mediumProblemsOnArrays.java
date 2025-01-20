import java.util.*;
class Solution {
    public void printList(ArrayList<Integer> ans) {
        for(int i=0;i<ans.size();i++) {
            System.out.print(ans.get(i) + " ");
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
}

class mediumProblemsOnArrays {

    public static void main(String[] args) {
        int[] nums1 = {-3, 4, 5, 1, -30, -10};

        Solution sol = new Solution();
        ArrayList<Integer> ans = sol.leaders(nums1);
        sol.printList(ans);
    }
}
