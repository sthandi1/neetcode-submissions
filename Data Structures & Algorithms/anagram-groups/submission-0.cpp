class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> groups;
        for (const auto &s: strs) {
            std::string key = s; // make a copy of s
            std::sort(key.begin(), key.end());
            // If key doesn't exist create it or add to existing key
            groups[key].push_back(s);
        }
        // Create vector for results
        vector<vector<string>> result;
        for (const auto &[key, group]: groups) {
            // Only push back the unordered strings
            result.push_back(group);
        }
        return result;
    }
};
