class Solution {
public:


int coinChange(vector<int>& coins, int amount) {
        vector<long>v(amount+1, INT_MAX);
        v[0] = 0;
        for(int i = 0; i<coins.size(); i++){
            for(int j = coins[i]; j<=amount; j++){
                v[j] = min(v[j], 1 + v[j - coins[i]]);
            }
        }
        return v[amount] == INT_MAX ? -1 : v[amount];
    }

  
};












