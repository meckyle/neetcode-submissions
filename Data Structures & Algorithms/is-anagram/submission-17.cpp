class Solution {
public:
    bool isAnagram(string s, string t) {

        if(s.length() != t.length()){
            return false;
        }

        unordered_map<char, int> maps;

        unordered_map<char, int> mapt;

        for(int i = 0; i < s.length(); i++){
            maps[s[i]] = maps[s[i]] + 1;
        }

        for(int j = 0; j < s.length(); j++){
            mapt[t[j]] = mapt[t[j]] + 1;
        }

        if(mapt == maps){
            return true;
        }
        return false;





        


        


        
    }
};
