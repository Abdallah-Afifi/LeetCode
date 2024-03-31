class Solution {
public:
    int strStr(std::string haystack, std::string needle) {
        // Check if needle is longer than haystack
        if (needle.length() > haystack.length()) {
            return -1; // Needle cannot be found in haystack
        }
        
        for (int i = 0; i <= static_cast<int>(haystack.length() - needle.length()); ++i) {
            if (haystack.substr(i, needle.length()) == needle) {
                return i;
            }
        }
        return -1;
    }
};
