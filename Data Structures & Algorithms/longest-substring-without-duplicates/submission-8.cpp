class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char>Set;
        int l = 0;
        int res = 0;
        

        for(int r = 0; r < s.size(); r++){
            while(Set.find(s[r]) != Set.end()){
                Set.erase(s[l]);
                l++;
            }
            Set.insert(s[r]);
            res = max(res, r -l + 1);

        }
        return res;



            
   
        
        
    }
};


