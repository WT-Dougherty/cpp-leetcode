#include <vector>
#include <algorithm>

class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        vector<int> arr;

        std:sort(nums.begin(), nums.end(), std::greater<int>());

        while (nums.size() != 0) {
            arr.push_back( nums[nums.size()-2] );
            arr.push_back( nums.back() );

            nums.pop_back(); nums.pop_back();
        }
        return arr;
    }
};
