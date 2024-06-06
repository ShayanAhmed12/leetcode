class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        int min, count, flag=0, totalcount = 0, originalcount = hand.size(), group = hand.size();
        for(int i = 0; i < hand.size();)
        {
            min = *min_element(hand.begin(), hand.end());

            // flag=0;
            // for(int l = 0; l<hand.size();l++){
            //     cout << hand[l] << " ";
            // }
            cout << endl;

            count = 1;
            for(int j = 0; j < hand.size(); )
            {
                if(hand[j]==min+count && count!=groupSize){
                    count++;
                    auto ft = find(hand.begin(),hand.end(),hand[j]);
                    if (ft != hand.end()) {
                        hand.erase(ft);
                    }
                    j=0;
                    flag=1;
                }
                else
                {
                    j++;
                }
                // cout << j << ". ";
                if(count>=groupSize)
                {
                    flag=1;
                    break;
                }
                
            }
            totalcount += count;
            group-=groupSize;

            if(flag==1)
            {
                i=0;
                auto it = find(hand.begin(),hand.end(),min);
                if (it != hand.end()) {
                    hand.erase(it);
                }
            }
            else
            {
                break;
            }


            // for(int l = 0; l<hand.size();l++){
            //     cout << hand[l] << " ";
            // }
            // cout << endl;
        } 

        if(hand.empty() && totalcount==originalcount && group == 0){
            return true;
        }
        else
        {
            return false;
        }
    }
};