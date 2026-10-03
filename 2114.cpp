#include <vector>
#include <string>

class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int max{0};

        int cur;
        for (const std::string& sentence : sentences) {
            cur = getNumSpaces(sentence) + 1;
            max = cur > max ? cur : max;
        }

        return max;
    }
private:
    int getNumSpaces(const std::string& sentence) {
        int count = 0;
        for (const char& c : sentence) {
            if (c == ' ') { count++; }
        }
        return count;
    }
};
