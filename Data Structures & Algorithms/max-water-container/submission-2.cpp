class Solution {
public:
    int maxArea(vector<int>& heights) {
        int left = 0, right = heights.size() - 1;

        int area = 0;

        while(left < right){

            int min_value = min(heights[left], heights[right]);
            int distance_between = right - left;


            int current_area = min_value * distance_between;

            if(current_area > area){
                area = current_area;
            }
            if(heights[left] <= heights[right]){
                ++left;
            }
            else{
                --right;
            }
        }

        return area;

    
    }
};
