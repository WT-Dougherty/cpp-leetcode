#include <string>

class Solution {
public:
    int countDigits(int num) {
        std::string numString = std::to_string(num);
        int count{0};

        for (const char& c : numString) {
            if (num % (c - '0') == 0) { count++; }
        }
        return count;
    }
};
