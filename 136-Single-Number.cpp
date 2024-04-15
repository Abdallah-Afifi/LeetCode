class Solution {
public:
    int singleNumber(vector<int>& nums) { 
       int ans=0;
\t   for(auto x:nums)
\t   ans^=x;
\t   return ans;
    }
};