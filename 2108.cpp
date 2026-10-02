#include <string>
#include <vector>

class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        string rs;

        for (string word : words) {
            auto l = word.begin(), r = word.end() - 1;
            do {
                if (*l != *r) break;
                l++, r--;
            } while (l < r);
            if (l < r) continue;
            rs = word;
            break;
        }

        return rs;
    }
};
