class Solution {
public:
    int addDigits(int num) {
        string str = to_string(num);
        int count = 0;
        for(;;)
        {
            count = 0;
            for(int i  = 0; i < str.length(); i++)
            {
                count += str[i]-'0';
            }
            if(count >= 10)
            {
                str = to_string(count);
                continue;
            }
            else
            {
                break;
            }
        }
        return count;
    }
    
};