#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#include <set>

using std::vector;
using std::max;
using std::min;
using std::sort;
using std::swap;
using std::reverse;
using std::map;
bool comp(vector<int> int1, vector<int> int2){
      return int1[0]<int2[0];
}


class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {


    }
};
// class Solution {
// public:
//     vector<vector<int>> merge(vector<vector<int>>& intervals) {
//         map<int,int> intervals;
//     }
// };
int main(int argc, char const *argv[])
{
      vector<vector<int>> v ={{1,6},{3,4}};
      Solution s;
      auto ans = s.merge(v);
      for(auto i:ans){
            std::cout<<i[0]<<" "<<i[1]<<std::endl;
      };
return 0;
}