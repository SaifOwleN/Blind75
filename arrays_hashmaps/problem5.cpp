#include <iostream>
#include <map>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
  vector<int> topKFrequent(vector<int> &nums, int k) {
    unordered_map<int, int> frequency;
    for (int num : nums) {
      frequency[num]++;
    }

    map<int, vector<int>, greater<int>> sortedByFrequency;
    for (auto &[num, freq] : frequency) {
      sortedByFrequency[freq].push_back(num);
    }

    vector<int> topK;
    for (auto &[freq, nums] : sortedByFrequency) {
      for (int num : nums) {
        if (k > 0) {
          topK.push_back(num);
          k--;
        } else {
          break;
        }
      }
      if (k == 0)
        break;
    }

    return topK;
  }
};
