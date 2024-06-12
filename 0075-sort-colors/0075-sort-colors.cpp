class Solution {
public:
    void sortColors(vector<int>& nums) {
        int ind = 0;
        vector<int> newvec;
        for(int i = 0 ; i<nums.size();i++)
        {
            if(nums[i]==0)
            {
                newvec.insert(newvec.begin(),nums[i]);
                ind++;
            }
            if(nums[i]==1)
            {
                newvec.insert(newvec.begin()+ind,nums[i]);
            }
            if(nums[i]==2)
            {
                newvec.push_back(nums[i]);
            }

        }

        nums = newvec;
    }
};