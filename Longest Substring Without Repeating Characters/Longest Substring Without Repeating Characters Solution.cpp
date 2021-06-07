class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        std::unordered_set<char> letter;
        int cc,count;
        count=0;
        cc=0;
        
        for(auto i=0; i<s.length();i++)
        {
            for(auto j=i; j<s.length();j++)
            {
                if(!letter.count(s[j]))
                {
                    letter.insert(s[j]);
                    count++;
                    cc=max(cc,count);
                }
                else
                {
                    letter.clear();
                    count=0;
                    break;
                }
            }
        }
        return cc;
  
    }
};