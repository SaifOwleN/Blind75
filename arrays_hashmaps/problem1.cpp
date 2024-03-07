#include <unordered_set>
#include <vector>
using namespace std;

class Solution {
public:
  bool containsDuplicate(vector<int> &nums) {
    unordered_set<int> ans;
    for (int i = 0; i < nums.size(); i++) {
      ans.insert(nums[i]);
    }
    if (ans.size() == nums.size()) {
      return false;
    }
    return true;
  }
};
