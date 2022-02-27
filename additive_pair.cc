#include <bits/stdc++.h>
using namespace std;
void result(vector<int> &v, int n) {
      map<int, int> mp;
      bool found=false;
      for (int i=0; i<v.size(); i++) {
            if(mp.count(n-v[i])==0){
                  mp[v[i]]=i;
                  
            }else{
                  found=true;
                  cout<<mp[n-v[i]]+1<<" "<<i+1<<endl;
                  return;
            }
      }
      if(found ==false)
            cout<<"IMPOSSIBLE"<<endl;
            return;
      return;
}


int main()
{     
      int n,m;
      cin>>n>>m;
      vector<int> v(n);
      for(int i=0; i<n; i++)
            cin>>v[i];
      result(v,m);
      return 0;
}
