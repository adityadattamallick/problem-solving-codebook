#include <string>
#include <map>

class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() == t.length()) {
            std::unordered_map<char, int> count_s;
            std::unordered_map<char, int> count_t;

            for (int i = 0; i < s.length(); i++) {
                count_s[s[i]]++;
                count_t[t[i]]++;
            }

            if (count_s == count_t) {
                return true;
            }
        }
        return false;
    }
};
