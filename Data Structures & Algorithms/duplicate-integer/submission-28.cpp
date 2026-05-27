class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {


        unordered_map<int, int>mp;


        for(int i = 0; i < nums.size(); i++){

            mp[nums[i]]++;


        }

        for(int j = 0; j < nums.size(); j++ ){
            if(mp[nums[j]] >= 2){
                return true;
            }
        }

            return false;
        



        // if value appears more than once, then  return true, else return false



    
    }

        
};

