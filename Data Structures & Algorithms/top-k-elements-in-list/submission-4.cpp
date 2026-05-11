class Solution {
public:

//KEY would be number from list
//value would be amount of time that number shows up


    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> hashmap;
        for(int i = 0; nums.size() > i; i++){
            hashmap[nums[i]]++;
        }

       // Put (frequency, number) pairs into a max heap
        priority_queue<pair<int,int>> maxHeap;
        for (auto& entry : hashmap) {
            maxHeap.push({entry.second, entry.first});
        }
                // Extract the top k numbers
        vector<int> result;
        for (int i = 0; i < k; i++) {
            result.push_back(maxHeap.top().second); // .second = the number itself
            maxHeap.pop();
        }

        return result;
        
        
    }
};
