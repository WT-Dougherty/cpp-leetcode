#include <vector>
#include <string>

class Solution {
public:
    std::vector<int> findWordsContaining(vector<string>& words, char x) {
        std::vector<int> ret;

        for (auto it = words.begin(); it < words.end(); it++) {
            for (const char& c : *it) {
                if (c == x) {
                    ret.push_back(it - words.begin());
                    break;
                }
            }
        }
        return ret;
    }
};
