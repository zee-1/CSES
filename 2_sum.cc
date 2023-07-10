#include <iostream>
#include <map>
#include <vector>

using std::map;
using std::cout;
using std::cin;
using std::vector;
using std::endl;

int main(int argc, char const *argv[])
{
      int a=0,x;
      cin>>a>>x;
      map<int,int> m;
      int n = a;
      cout<<"n="<<n<<endl;;
      while(n--){
            int i=0;
            cin>>i;
            int temp =x-i;
            // cout<<temp<<endl;
            if (temp>=0){
                  // cout<<m[temp]<<endl;
                  if (m[temp]){
                        cout<<i-1<<"-"<<m[temp]-1<<endl;
                  }
                  else{
                        m[i]=a-n+1;
                  }
                  // cout<<m[temp]<<endl;
            }
            else{
                  cout<<"temp="<<temp<<endl;
            }
      }
      cout<<"End";
      return 0;
}
