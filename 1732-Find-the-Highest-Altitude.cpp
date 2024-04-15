class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n=gain.size();
        for(int i=1; i<n; i++){
            gain[i]+=gain[i-1];
        }
        gain.push_back(0);//0 for the beginning
        return *max_element(gain.begin(), gain.end());
    }
};