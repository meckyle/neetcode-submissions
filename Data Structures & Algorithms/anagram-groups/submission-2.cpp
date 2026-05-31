class Solution {
public:
   vector<vector<string>> groupAnagrams(vector<string>& strs) {

       unordered_map<string, vector<string>> mp;

       for (int i = 0; i < strs.size(); i++) {

           string word = strs[i];
           sort(word.begin(), word.end());

           mp[word].push_back(strs[i]); // Appends the string to the vector stored at key word
       }

       vector<vector<string>> result;

       for (auto& entry : mp) {
           result.push_back(entry.second);
       }


       return result;
   }


};
