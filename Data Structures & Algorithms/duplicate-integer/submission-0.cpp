class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        // Set guarantee uniqueness
        std::unordered_set<int> seen;
        for (const auto &num: nums) {
            // Return true if in set
            if (seen.count(num))
                return true;
            // otherwise insert into set
            seen.insert(num);
        }
        return false;        
    }
};