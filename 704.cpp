class Solution {
public:
    int binarySearch(std::vector<int>& nums, int l, int r, int target) {
        int mid = (l + r) / 2;

        if (nums[mid] == target) {
            return mid;
        } else if (l >= r) {
            return -1;
        } else if (nums[mid] < target) {
            return binarySearch(nums, mid + 1, r, target);
        } else {
            return binarySearch(nums, l, mid - 1, target);
        }
    }
    int search(vector<int>& nums, int target) {
        return binarySearch(nums, 0, nums.size() - 1, target);
    }
};
