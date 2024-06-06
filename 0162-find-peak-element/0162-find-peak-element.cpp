class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int max = 0;
        for(int i = 0; i< nums.size();i++)
        {
            if(i==0)
            {
                if(nums.size()>1 && nums[i] > nums[i+1])
                {
                    max = i;
                }
                continue;
            }
            else if(i==nums.size()-1)
            {
                if(nums.size()>1 && nums[i] > nums[i-1])
                {
                    max = i;
                }
                continue;
            }
            if(nums[i] > nums[i-1] && nums[i] > nums[i+1])
            {
                max = i;
            }
        }
        return max;
    }
};