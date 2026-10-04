#include <vector>

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int max{-1}, wealth{0};
        for (const std::vector<int>& customer : accounts) {
            for (const int& bankBalance : customer) {
                wealth += bankBalance;
            }
            max = wealth > max ? wealth : max;
            wealth = 0;
        }
        return max;
    }
};
