#include <cstdlib>
#include <vector>
#include <string>

class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int eleSum{0}, digitSum{0};
        for (const int& num : nums) {
            eleSum += num;
            std::string strNum = std::to_string(num);
            for (const char& c : strNum) {
                digitSum += c - '0';
            }
        }
        return std::abs(digitSum - eleSum);
    }
};
