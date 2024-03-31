class Solution {
public:
   string removeDigit(string number, char digit) {
       int n = number.length();

       int lastOccur = -1;

       for (int i = 0; i < n - 1; i++) {
           if (number[i] == digit) {
               if (number[i] < number[i + 1]) {
                   number.erase(i, 1);
                   return number;
               }
               lastOccur = i;
           }
       }

       if (number[n - 1] == digit) {
           lastOccur = n - 1;
       }

       number.erase(lastOccur, 1);
       return number;
   }
};