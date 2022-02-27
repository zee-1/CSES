#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>

vector<int> twoSum(vector<int> nums, int target) {
       unordered_map<int, int> hash; // Use as a hash table, instead of creating one
        vector<int> result;
        for (int i = 0; i < nums.size(); i++)
            if (hash.count(target - nums[i])) // If the partner of this value to reach the target sum has been saved already
            {
                result.push_back(hash[target - nums[i]]); // Get index of other value
                result.push_back(i);
                return result;
            }
            else // Pair has not yet been found, so save value to hash table
                hash[nums[i]] = i;
        return result;
    }
int main(int argc, char const *argv[])
{     
      vi a = twoSum({51,49},100);
      for(auto i:a){cout<<i<<" ";};
      return 0;
}
