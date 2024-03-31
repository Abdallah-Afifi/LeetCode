class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int total = 0;  // Initialize the net gas difference
        int res = 0;    // Initialize the starting index
        
        // Iterate through the gas stations
        for (int i = 0; i < gas.size(); ++i) {
            // Update the net gas difference
            total += gas[i] - cost[i];
            
            // If the net gas difference becomes negative, reset to zero and update the starting index
            if (total < 0) {
                total = 0;
                res = i + 1;
            }
        }
        
        // Check if a solution exists based on the total gas and cost
        return (accumulate(gas.begin(), gas.end(), 0) < accumulate(cost.begin(), cost.end(), 0)) ? -1 : res;
    }
};