
#include <iostream>
#include <algorithm>
#include <set>

#define vi vector<int>
#define In(a) for(auto &i:a) cin>>i;
#define Out(a) for(auto i:a) cout<<i<<"-";
using namespace std;

int main()
{
      ios_base::sync_with_stdio(false);
    cin. tie(nullptr);
    cout.tie(nullptr);
      int n, m,x;
      cin>>n>>m;
      multiset<int> a;
      while(n-->0){
            cin>>x;
            a.insert(x);
      }
      while(m-->0){
            cin>>x;
            auto it =  upper_bound(a.begin(),a.end(),x);
            if(it==a.begin())
                  cout<<-1<<endl;
            else{
                  cout<<*(--it)<<endl;
                  a.erase(it);
            }
      }
      return 0;
}