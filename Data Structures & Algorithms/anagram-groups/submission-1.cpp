/*


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

*/
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>Hashmap;
        for (const auto& s: strs){
            string sortedS = s;
            sort(sortedS.begin(), sortedS.end());
            Hashmap[sortedS].push_back(s);

        }

        vector<vector<string>> result;
        for(auto& pair : Hashmap){
            result.push_back(pair.second);
        }
        return result;


            }
};