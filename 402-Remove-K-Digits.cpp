class Solution {
public:
    string removeKdigits(string num, int k) {
        int n = num.length();

        if (k >= n) {
            return \0\;
        }

        vector<char> result;

        for (int i = 0; i < n; i++) {
            char digit = num[i];

            while (k > 0 && !result.empty() && result.back() > digit) {
                result.pop_back();
                k--;
            }

            result.push_back(digit);
        }
        result.resize(result.size() - k);

        string result_str(result.begin(), result.end());
        size_t nonZeroIndex = result_str.find_first_not_of('0');

        return (nonZeroIndex == string::npos) ? \0\ : result_str.substr(nonZeroIndex);
    }
};