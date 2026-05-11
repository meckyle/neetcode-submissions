class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        vector<int> res(nums.size());

        for(int i = 0; nums.size() > i; i++){ 
            int total = 1;
            for(int j = 0; nums.size() > j; j++){
                if (i !=j){
                total *= nums[j];
            }
            }
            res[i] = total;
        }

        return res;
    }
};
