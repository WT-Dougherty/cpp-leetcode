#include <set>

class Solution {
public:
    bool checkIfPangram(std::string sentence) {
        std::set<char> seen;
        for (char c : sentence) {
            seen.insert(c);
        }
        return seen.size() == 26;
    }
};
