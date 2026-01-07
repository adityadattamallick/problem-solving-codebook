#include <vector>
#include <unordered_set>

class Solution {
public:
    bool containsDuplicate(vector<int> &nums) {
        std::unordered_set<int> already_counted;

        for (auto num: nums) {
            if (already_counted.count(num)) {
                return true;
            }
            already_counted.insert(num);
        }
        return false;
    }
};
