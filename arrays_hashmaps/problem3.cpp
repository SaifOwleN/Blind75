#include <unordered_map>
#include <vector>
using namespace std;
class Solution {
public:
  vector<int> twoSum(vector<int> &nums, int target) {
    unordered_map<int, int> x;
    for (int i = 0; i < nums.size(); i++) {
      int d = target - nums[i];
      if (x.count(d)) {
        return {i, x[target - nums[i]]};
      }
      x[nums[i]] = i;
    }
    return {};
  }
};
