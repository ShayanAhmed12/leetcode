class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        
        unordered_map<int, int> umap;
        int sum = 0;
        umap[0] = -1;

        for (int i = 0; i < nums.size(); i++) {
            sum = (sum + nums[i]) % k;
            if (umap.find(sum) != umap.end()) {
                if (i - umap[sum] > 1) {
                    return true;
                }
            } else {
                umap[sum] = i;
            }
        }

        return false;
    }
};