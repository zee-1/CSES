/*
Find the largest index k such that a[k] < a[k + 1]. If no such index exists, the permutation is the last permutation.
Find the largest index l greater than k such that a[k] < a[l].
Swap the value of a[k] with that of a[l].
Reverse the sequence from a[k + 1] up to and including the final element a[n].

Source: Wikipedia
*/

#include <iostream>
#include <vector>
#include <algorithm>

using std::sort;
using std::vector;
using std::reverse;
using std::min;

void swap(int &a, int &b){
    a = a+b;
    b = a-b;
    a = a-b;
}

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        size_t k = 0;
        size_t l = 0;
        auto count = nums.size();
        for (size_t i = 1; i < count; i++)
        {
            if(nums[i]<nums[i+1] and i>k and i<count-1){
                k=i;
            }
            if(nums[k]< nums[i] and l<i){
                l=i;
            }
        }

        if(l==k){
            reverse(nums.begin(),nums.end());
            return;
        }
        swap(nums[l],nums[k]);

        int i = k+1, j = count-1;

        while(i<j and i<count  and j>=0){
            swap(nums[i++],nums[j--]);
        }
    }
};

int main(int argc, char const *argv[])
{
    Solution s;
    vector<int> v = {1,2,2,1};
    s.nextPermutation(v);

    for(auto i:v){
        std::cout<<i<<" ";
    };
    return 0;
}
