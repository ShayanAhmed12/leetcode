class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int n = nums.size(), sum = 0, result = 0;
        vector<int> newvec(k);
        newvec[0] = 1;

        for (int i=0;i<nums.size();i++) {
            sum = (sum + nums[i] % k + k) % k;
            result += newvec[sum];
            newvec[sum]++;
        }

        return result;
    }
};