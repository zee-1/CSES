#include <iostream>
#include <chrono>
#include <unordered_map>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
      int n = INT32_MAX;
      // cin >> n;
      unordered_map<int, unsigned int> mp;
      vector<int> arr(n,1);
      int Max = INT32_MIN;
      int i = 0, j = 0;
      auto start = chrono::high_resolution_clock::now();
      while (j != n)
      {
            Max = max(Max, j - i + 1);
            i = max(i, int(mp[arr[j]]));
            mp[arr[j]] = j;
            j++;
      }
      auto end = chrono::high_resolution_clock::now();
      std::cout<<"Time="<< std::chrono::duration_cast<std::chrono::nanoseconds>(end-start).count()<<std::endl;
      std::cout << Max << std::endl;
      return 0;
}
