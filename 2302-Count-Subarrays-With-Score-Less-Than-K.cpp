class Solution {
public:
    long long countSubarrays(vector<int>& nums, long long k) {
        long long sum = 0;
        int n = nums.size();
        int s = 0;
        long long ans = 0;
        for(int e=0; e<n; e++){
            sum += nums[e];
            while(sum * (e - s + 1) >= k) sum -= nums[s++];
            ans += (e - s + 1);
        }
        return ans;
    }
};