#include <iostream>
#define lli long long int
using namespace std;

int main(int argc, char const *argv[])
{
      lli n;
      cin>>n;
      if(n==1){
            std::cout<<1<<std::endl;
      }
      if(n<4){
            std::cout<<"NO SOLUTION"<<std::endl;
      }
      else{
            for(lli i=2; i<=n; i+=2){
                  cout<<i<<" ";
            }
            for(lli i=1;i<=n;i+=2){
                  cout<<i<<" ";
            }
            
      }
      return 0;
}
