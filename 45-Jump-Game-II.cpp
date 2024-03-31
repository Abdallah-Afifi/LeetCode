class Solution {
public:
    int jump(vector<int>& nums) {
        
        int n=nums.size();
        if(n==1) return 0;

        int curR=0;
        int maxR=0;
        int ans=0;

        for(int i=0;i<n-1;i++){
            curR=max(curR,i+nums[i]);
            if(i==maxR){
                ans++;
                maxR=curR;
            }

        }
        return ans;
        
    }
};