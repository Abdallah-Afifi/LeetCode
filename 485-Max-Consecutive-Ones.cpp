class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        \tint count = 0 , count_max = 0;
\t\t
        for(auto& num : nums) 
\t\t{
            if(num == 1)
\t\t\t\t++count;
\t\t\t\t
            else
            {
                count_max = (count_max < count) ? count : count_max;
                count = 0;
            }
        }
\t\t
        return (count > count_max) ? count : count_max ;
    }
};