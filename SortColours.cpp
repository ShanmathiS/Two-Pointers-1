// Time Complexity : O(N)
// Space Complexity : O(1)
// Did this code successfully run on Leetcode : Yes
// Any problem you faced while coding this : No

class Solution {
public:
    void sortColors(vector<int>& nums) {
        if(nums.size() == 0) return;
        int index = 0;
        for(int colour = 0; colour <= 2; colour++)
        {
            for(int i = 0; i < nums.size(); i++)
            {
                if(nums[i] == colour && index <= nums.size())
                {
                    int temp = nums[index];
                    nums[index] = nums[i];
                    nums[i] = temp;
                    index++;
                }
            }
        }
    }
};
