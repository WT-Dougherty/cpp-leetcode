#include <string>
#include <cctype>

class Solution {
public:
    int countKeyChanges(std::string s) {
        int count {0};

        for (auto it = s.begin() + 1; it < s.end(); it++) {
            if ( std::tolower(*it) != std::tolower(*(it-1)) ) {
                count += 1;
            }
        }

        return count;
    }
};
