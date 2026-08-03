class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // Initialise left value
        int l = 0;
        int maxP = 0;
        // Move r to 1 more than l
        for (int r = 1; r < prices.size(); r++) {
            // Check left is less than right
            if (prices[l] < prices[r]) {
                // store profit max
                int profit = prices[r] - prices[l];
                maxP = max(maxP, profit);
            } else {
                // change l to current r if not smaller
                l = r;
            }
        }
        return maxP;
    }
};
