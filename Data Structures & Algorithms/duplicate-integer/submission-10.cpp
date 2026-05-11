/*


#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int> hashmap;

        for (int i = 0; i < nums.size(); i++){

            if (hashmap.find(nums[i]) != hashmap.end()){
                return {true};
            }
            hashmap[nums[i]] = i;
        }

    return {false};
        
    }
};
*/



class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {

        unordered_map<int, int>hashmap;
        for(int i = 0; nums.size() > i; i++){
            if(hashmap.find(nums[i]) != hashmap.end()){
                return {true};
            }
                    hashmap[nums[i]] = i;

        }
      

        return {false};





    }
};
















