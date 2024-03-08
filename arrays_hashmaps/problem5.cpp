#include <iostream>
#include <map>
#include <vector>
using namespace std;

class Solution {
public:
  vector<int> topKFrequent(vector<int> &nums, int k) {
    vector<int> z;
    for (int i = 0; i < nums.size(); i++) {
      z[i]++;
    }
    cout << z.size();
    map<int, int> x;
    for (int i = 0; i < z.size(); i++) {
      x[z[i]] = i;
    }
    for (int i = 0; i < x.size(); i++) {
      cout << "first " << x[i] << " second: " << i << endl;
    }
    return {};
  }
};

int main() {
  Solution x;
  vector<int> a = {1, 1, 1, 2, 2, 3};
  x.topKFrequent(a, 2);
}
