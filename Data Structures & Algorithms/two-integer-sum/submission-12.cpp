class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        //sort(nums.begin(), nums.end()); //sorts numbers in nums from lowest to highest

        for(int i = 0; i < nums.size(); i++){

            int value = target - nums[i];

            for(int j = i + 1; j< nums.size(); j++){
                if(value == nums[j]){
                    return {i, j};
                }
            }

        }
        return {};










        
    }
};
