class Solution {
public:
    bool isAnagram(string s, string t) {

        //we are trying to ensure that both strings have the same amount of characters as each other

        if(s.size() != t.size()){
            return false;
        }

        unordered_map<int,int>mapS;
        unordered_map<int,int>mapT;

        for(int i = 0; s.size() > i; i++){
            mapS[s[i]] +=1;
            mapT[t[i]] +=1;
        }

        if(mapS == mapT){
            return true;
        }
        else{
            return false;
        }


























        // if(s.size() != t.size()){
        //     return false;
        // }



        // unordered_map<char, int>mp;
        // unordered_map<char, int>mps;


        // for(int i = 0; i < s.size(); i++){
        //     mp[s[i]]++;
        //     mps[t[i]]++;
        // }

        //     if(mp != mps){
        //         return false;
        //     }

        //     else {
        //         return true;
        //     }

 
        
    }
};
