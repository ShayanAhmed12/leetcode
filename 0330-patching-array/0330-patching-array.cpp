class Solution {
public:
    int minPatches(vector<int>& nums, int n) {
        long missing = 1;
        int count  = 0,ind = 0;

        for(;;)
        {
            if(missing > n)
            {
                break;
            }
            if (ind < nums.size() && nums[ind] <= missing) {
                missing += nums[ind];
                ind++;
            } else {
                missing += missing;
                count++;
            }
        }

        return count;
    }
};