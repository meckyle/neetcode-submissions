class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int, int>mp;

        int counter = 0;
        int highest = 1;

        if(nums.size() == 0) return 0;



        
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i++){
            mp[nums[i]]++;
           // if(nums[i] == nums[i+1] + 1){
                //counter++;
           // }

        }

        for (int i = 0; i < nums.size(); i++){

            if(i > 0 && nums[i] == nums[i-1]){
                continue;
        }

            if(mp.find(nums[i] + 1) != mp.end()){
                highest++;

            }
            else{
                if(highest >= counter){
                    counter = highest;
                }
                highest = 1;
            }
        }


        return counter;



        //if (mp.find(5) != mp.end()) 

        

        
    }
};
