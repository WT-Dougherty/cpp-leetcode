#include <unordered_map>
#include <vector>

class Solution {
public:
    bool isValid(std::string s) {
        std::unordered_map<char, char> bktMap {
            { '}', '{' },
            { ']', '[' },
            { ')', '(' },
        };

        std::vector<char> stack;

        for (const char& c : s) {
            // case: add to stack
            if (bktMap.find(c) == bktMap.end()) {
                stack.push_back(c);
            } else {
                if (!stack.empty()){
                    if (stack.back() != bktMap[c]) {
                        return false;
                    }
                    stack.pop_back();
                } else { return false; }
            }
        }

        return stack.size() == 0;
    }
};
