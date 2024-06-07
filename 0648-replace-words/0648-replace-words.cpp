class Solution {
public:
    string replaceWords(vector<string>& dictionary, string sentence) {
        string s, newstr;
        stringstream ss(sentence);
        int max;
        while (getline(ss, s, ' ')) {
            if(newstr != "")
            {
                newstr = newstr + " ";
            }
            max = -1;
            for (int i = 0; i < dictionary.size(); i++) {
                if (s.find(dictionary[i], 0) == 0) {
                    if(max==-1 || dictionary[i].length()<max)
                    {
                        max = dictionary[i].length();
                        s = dictionary[i];
                    }
                }
            }
            newstr = newstr + s;
        }

        return newstr;
    }
};