class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        if(m>bloomDay.size()/k)
        {
            return -1;
        }

        int high = 0, low = INT_MAX;

        for(int i = 0; i< bloomDay.size();i++)
        {
            if(bloomDay[i]>high)
            {
                high=bloomDay[i];
            }
            if(bloomDay[i]<low)
            {
                low=bloomDay[i];
            }
        }

        while(low<=high)
        {
            int medium = (high+low)/2, count = 0, bmade = 0;
            for(int i = 0; i< bloomDay.size();i++)
            {
                if(bloomDay[i]<=medium)
                {
                    count++;
                    if(count==k)
                    {
                        bmade++;
                        count = 0;
                    }
                }
                else
                count = 0;
            }

            if(bmade>=m)
            {
                high=medium-1;
            }
            else
            {
                low = medium+1;
            }
        }
        return low;
    }
};