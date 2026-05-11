class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        if (nums.size() < 3) return {};
        sort(nums.begin(), nums.end());

            vector<vector<int>> big_array;

    
    for(int i = 0; i + 2 < (int)nums.size(); i++){

        if (i > 0 && nums[i] == nums[i - 1]) continue;



        int left = 1 + i;
        int right = (int)nums.size() - 1;

    
        while(left < right){
            int start_value = nums[i];
            int left_value = nums[left];
            int right_value = nums[right];

            if(left_value + right_value == -(start_value)){

                vector<int> small_array = {start_value, left_value, right_value};
                big_array.push_back(small_array);    
                    ++left;
                    --right;
                while (left < right && nums[left] == nums[left - 1]) ++left;
                while (left < right && nums[right] == nums[right + 1]) --right;


            }
            else if(left_value + right_value > -(start_value)){
                --right;
            }
            else{
                ++left;
            }
        }

    }
    return big_array;

    }
};
