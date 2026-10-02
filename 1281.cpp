class Solution {
public:
    int subtractProductAndSum(int n) {
        int product{1}, sum{0};

        for (char c : std::to_string(n)) {
            int digit{c - '0'};
            product *= digit;
            sum += digit;
        }

        return product - sum;
    }
};
