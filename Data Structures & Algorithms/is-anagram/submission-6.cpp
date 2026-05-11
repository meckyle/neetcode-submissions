class Solution {
public:
    bool isAnagram(string s, string t) {

        if(s.length() != t.length()){
            return false;
        }

        unordered_map<char, int>hashmapS;
        unordered_map<char, int> hashmapT;

        for(char c : s){
            hashmapS[c]++;
        }

        for(char c : t){
            hashmapT[c]++;
        }

        return hashmapS == hashmapT;
        


        
    }
};
