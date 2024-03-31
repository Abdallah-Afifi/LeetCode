class Solution {
public:
     bool canJump(vector<int>& nums) {
        
        int n = nums.size(), farthest_index = 0 ;
        for(int i=0; i<n; i++) {
            if(farthest_index < i) return false;
            farthest_index = max (i + nums[i] , farthest_index) ;
        }
        return true;
    }
};