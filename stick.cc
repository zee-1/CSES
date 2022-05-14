#include <iostream>
#include <vector>
#include<algorithm>
using std::cin,std::cout,std::vector;
#define  ll long long
int main(int argc, char const *argv[])
{
      ll s=0;
      cin>>s;
      vector<ll> v(s);
      ll sum=0;
      for(auto &i:v){cin>>i;sum+=i;};
      sum = sum/s;  //changed to avg
      auto id=std::upper_bound(v.begin(),v.end(),sum);
      ll ans=0;
      for(auto i:v){ans+=abs(*id-i);};
      cout<<ans;   
      return 0;
}
/*
10
576256620 793841203 607061968 362964043 698782696 775664590 69510254 711292185 317067848 711901928

1758621869
*/
