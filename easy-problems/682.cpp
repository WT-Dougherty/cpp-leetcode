#include <string>
#include <vector>

class Solution {
public:
    int calPoints(vector<string>& operations) {
        std::vector<int> prevScores;
        int record{0};

        for (const std::string& op : operations) {
            int score;
            if (op == "C") {
                score = -1 * prevScores.back();
                prevScores.pop_back();
            } else if (op == "+") {
                score = prevScores[prevScores.size() - 2] + prevScores.back();
                prevScores.push_back(score);
            } else if (op == "D") {
                score = 2 * prevScores.back();
                prevScores.push_back(score);
            } else {
                score = std::stoi(op);
                prevScores.push_back(score);  
            }    
            record += score;
        }
        return record;
    }
};
