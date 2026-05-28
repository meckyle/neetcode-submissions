class Solution {
public:
    bool isAnagram(string s, string t) {

        //we are trying to ensure that both strings have the same amount of characters as each other



        if(s.size() != t.size()){
            return false;
        }



        unordered_map<char, int>mp;
        unordered_map<char, int>mps;


        for(int i = 0; i < s.size(); i++){
            mp[s[i]]++;
            mps[t[i]]++;
        }

        for(int j = 0; j < s.size(); j++){

            if(mp != mps){
                return false;
            }

            return true;
 
        }
    }
};
