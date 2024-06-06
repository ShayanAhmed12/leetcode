class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        sort(piles.begin(), piles.end());
        int mid, low = 1, high = *max_element(piles.begin(), piles.end());
        long long int n;
        while (low <= high) {
            mid = low + (high - low) / 2;
            n = 0;
            for (int i = 0; i < piles.size(); i++) {
                n += ceil((double)piles[i] / mid);
            }
            cout << n << " ";

            if (n == h) {
                break;
            }

            if (n > h)
                low = mid + 1;

            else
                high = mid - 1;
        }
        mid = low + (high - low) / 2;
        return mid;
    }
};