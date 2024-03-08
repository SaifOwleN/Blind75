#include <string>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
  vector<vector<string>> groupAnagrams(vector<string> &strs) {
    unordered_map<string, vector<string>> xdd;
    vector<vector<string>> answer;
    for (int i = 0; i < strs.size(); i++) {
      vector<int> z(26);
      for (int j = 0; j < strs[i].size(); j++) {
        z[strs[i][j] - 'a']++;
      };
      string aloo = "";
      for (int j = 0; j < 26; j++) {
        aloo.append(to_string(z[j]) + 'x');
      };
      xdd[aloo].push_back(strs[i]);
    }
    for (auto it = xdd.begin(); it != xdd.end(); it++) {
      answer.push_back(it->second);
    }
    return answer;
  }
};
