#include <string>

class Solution {
public:
    int addDigits(int num) {
        if (num < 10) { return num; }

        std::string ns = std::to_string(num);
        int numPrime {0};
        
        for (char c : ns) {
            numPrime += (int)c - '0';
        }

        return addDigits(numPrime);
    }
};
