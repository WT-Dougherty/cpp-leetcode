#include <string>
#include <cctype>

class Solution {
public:
    std::string toLowerCase(std::string s) {
        std::string rs{""};

        for ( char c : s ) {
            if ( std::islower(c) ) {
                rs += c;
            } else {
                rs += std::tolower(c);
            }
        }

        return rs;
    }
};
