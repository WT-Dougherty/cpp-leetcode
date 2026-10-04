#include <string>
#include <set>

class Solution {
public:
    int firstUniqChar(std::string s) {
        std::set<char> seen = {};
        for (auto it = s.begin(); it < s.end(); it++) {
            if (seen.find(*it) != seen.end()) {
                continue;
            }
            seen.insert(*it);
            
            auto itPrime = it + 1;
            while (*itPrime != *it && itPrime != s.end()) { itPrime++; }
            if (itPrime == s.end()) { return it - s.begin(); }
        }
        return -1;
    }
};
