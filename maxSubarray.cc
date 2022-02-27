#include <iostream>
#include <vector>
#include <fstream>

using std::cin;
using std::cout;
using std::vector;
using std::max;
long l;
int maxSubarray(vector<long>& num){
      long ans=INT64_MIN;
      long a=0;
      for (auto x: num){
            a+=x;
            ans=max(ans,a);
            a=max(a,0);
      }
      return ans;
}
int maxSubArray(vector<long> b){
      //maximum subarray
}

int main(int argc, char const *argv[])
{
      int size=0;
      cin>>size;
      vector<long> a(size);
      for(auto &i:a){cin>>i;};
      cout<<maxSubarray(a);
      return 0;
}
