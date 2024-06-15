class Solution {
public:
    int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital) {

        int total = 0, ind,min;
        for ( ;k>0; k--) {
            min = *min_element(capital.begin(),capital.end());
            ind = distance(begin(capital), min_element(begin(capital), end(capital)));
            for(int i = 0; i < profits.size();i++) {
                if(capital[i]==min && profits[i]>profits[ind])
                {
                    ind = i;
                }
            } 
            total+=profits[ind];
            capital.erase(capital.begin() + ind);
            profits.erase(profits.begin() + ind);
        }

        return total;
    }
};