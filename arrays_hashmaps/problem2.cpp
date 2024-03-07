#include <map>
#include <set>
#include <string>
#include <unordered_set>
#include <vector>
using namespace std;

class Solution {
public:
  bool isAnagram(string s, string t) {
    if (s.size() != t.size()) {
      return false;
    }
    map<char, int> a, b;
    for (int i = 0; i < s.size(); i++) {
      a[s[i]]++;
      b[t[i]]++;
    }
    if (a == b) {
      return true;
    }
    return false;
  };
};
