class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> hashmap;

        for(int i = 0; strs.size() > i; i++){
            string sortedWord = strs[i];
            sort(sortedWord.begin(), sortedWord.end());
            hashmap[sortedWord].push_back(strs[i]);
        }

        vector<vector<string>> result;
        for (auto& entry : hashmap) {
        result.push_back(entry.second);
}
return result;


    }
};
