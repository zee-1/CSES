#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

#define vi vector<int>
#define vb vector<bool>

int main(int argc, char const *argv[])
{
      int test_cases=0;
      cin>>test_cases;
      vi ans;
      for (int i=0; i<test_cases; i++){
            int n=0;
            cin>>n;
            int temp = int(ceil(float(n)/4));
            ans.push_back(temp);
      }    

      for (int i=0; i<test_cases; i++){
            cout<<"Case #"<<i+1<<':'<<ans[i]<<'\n';
      }

      return 0;
}