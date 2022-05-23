#include <iostream>
#include <set>
#include <algorithm>
#include <map>
using namespace std;

int main(int argc, char const *argv[])
{
      int n=0;
      cin>>n;

      set<pair<int, int>> s;
      for(int i=0; i<n; i++){
            pair <int, int> p;
            cin>>p.first;
            p.second = i;
            s.insert(p);
      }

      int arr[n][2],j=0;
      for(auto i:s){
            arr[j][0]=i.first;
            arr[j][1]=i.second;
            j++;
      };
      int ans=1;
      for(int i=0; i<n-1; i++){
            if(arr[i][1]>arr[i+1][1]) ans++;
      }

      cout<<ans<<endl;
      return 0;
}
