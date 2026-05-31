class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        //basically what we are doing is returning, the k amount of the most frequent
        //elements, that exist, and we are returning the value, NOT the index

        unordered_map<int, int> mp;

        for(int i = 0; i < nums.size();i++){ // What this loop is doing, is adding the values into a hashmap
            mp[nums[i]]++; //Adds the frequency of occurence into the hashmap
        }

        //Find out how to sort the hashmap in ascending order


        vector<pair<int, int>> vec(mp.begin(), mp.end()); // Moves the hashmap values to a vector

    sort(vec.begin(), vec.end(), [](const auto& a, const auto& b) {
        return a.second > b.second; //This sorts the vector from descending order
    });

    vector<int> values;

    for(int j = 0; j< k; j++){
        values.push_back(vec[j].first);
    }

    return values;







            

            












        
    }
};
