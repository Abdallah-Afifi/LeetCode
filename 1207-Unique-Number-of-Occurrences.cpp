class Solution {
public:
    
    bool uniqueOccurrences(vector<int>& arr) {
        // count the number of occurrences of each value in the array
        unordered_map<int, int> count;
        for (auto& num : arr) count[num]++;

        // check all the frequencies are unique
        unordered_set<int> freq;
        for (auto& [v, f] : count) {
            if (freq.count(f) != 0) return false;
            freq.insert(f);
        }
        return true;
    }
};