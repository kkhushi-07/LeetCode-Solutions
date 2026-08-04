class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;

        for (string s : strs) {
            string word = s;
            sort(word.begin(), word.end()); // Sorted string acts as the canonical key
            mp[word].push_back(s);
        }

        vector<vector<string>> result;
        for (auto it : mp) {
            result.push_back(it.second);
        }

        return result;
    }
};
