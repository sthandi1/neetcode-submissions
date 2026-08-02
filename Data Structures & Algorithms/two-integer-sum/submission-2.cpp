class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // value and then position
        std::unordered_map<int, int> seen;

        for (int i = 0; i < nums.size(); ++i) {
            // compute the difference
            int diff = target - nums[i];
            // Has this value been seen already?
            auto it = seen.find(diff);
            // If so we have our answer
            if (it != seen.end()) {
                return {it->second, i};
            }
            // If not then insert into the map
            seen[nums[i]] = i;
        }

        return {};
    }
};
