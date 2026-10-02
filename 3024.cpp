#include <vector>
#include <set>

class Solution {
public:
    string triangleType(vector<int>& nums) {
        std::set<int> sides;

        for (const int& num : nums) {
            sides.insert(num);
        }

        std::sort(nums.begin(), nums.end());

        if (nums.back() >= nums[0] + nums[1]) {
            return "none";
        }

        return sides.size() == 1 ? "equilateral" : sides.size() == 2 ? "isosceles" : "scalene";
    }
};
