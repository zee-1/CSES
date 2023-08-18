#include <vector>
#include <iostream>
#include <algorithm>
#include <limits>

using std::vector;
using std::max;
using std::min;
using std::sort;
using std::swap;
using std::reverse;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
      long long int sum_so_for = -__INT32_MAX__,
                    max_sum    = 0;
      for(auto i:nums){
            sum_so_for = max((long long)(i),sum_so_for+i);
            max_sum    = max(max_sum,sum_so_for);
      };

      return max_sum;
    }
};

int main(int argc, char const *argv[])
{
      Solution s;

      vector<int> vec = {-2,1,-3,4,-1,2,1,-5,4};
      auto ans = s.maxSubArray(vec);
      std::cout<<ans<<std::endl;
return 0;
}