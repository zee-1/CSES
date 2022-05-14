#include <set>
#include <iostream>
#include <algorithm>
#define ll long long
using std::cin,std::cout,std::multiset;
int main(int argc, char const *argv[])
{
      int s; cin>>s;
      multiset<ll> ss;
      ll x;
      for(auto i=0; i<s;i++){cin>>x;ss.insert(x);}
      auto id =ss.begin();
      std::advance(id,(s%2!=0)?s/2:(((s/2)+1)+s/2)/2);
      ll sum=0;
      for(auto i:ss){sum+=std::abs(*id-i);};
      cout<<sum;
      return 0;
}