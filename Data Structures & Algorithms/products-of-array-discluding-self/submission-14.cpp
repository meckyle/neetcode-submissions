class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {


        //What we can do if we dont want to use teh division operator,
        //We are gonna iterate through the loop and push the values in the array to another array
        //we then will iterate through that array and multiply the terms and then return push those values to
        //another arrya, we will then return that array at the very end

        vector<int> output;

        int value = 1;

       

        for(int i = 0; i < nums.size(); i++){
            for(int j = 0; j < nums.size(); j++){
                if(i != j){
                    value = value * nums[j];
                }
            }

            int  j = 0;
            output.push_back(value);
            value = 1;

        }

        return output;
    }
};
