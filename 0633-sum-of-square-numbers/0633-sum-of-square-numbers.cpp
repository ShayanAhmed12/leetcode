class Solution {
public:
    bool judgeSquareSum(int c) {
        long long low = 0, high = sqrt(c), flag = 0;
        while(low<=high)
        {
            if(c==(low*low)+(high*high))
            {
                return true;
            }
            else if(c>(low*low)+(high*high))
            {
                low++;
            }
            else
            {
                high--;
            }
        }
        return false;
    }
};