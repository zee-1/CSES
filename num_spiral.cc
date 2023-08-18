#include <iostream>
#define lli long long int
using namespace std;

int main(int argc, char const *argv[])
{
      int num_test = 0;
      cin>>num_test;
      while(num_test){
            num_test--;
            lli y=0,x=0;
            cin>>y>>x;
            lli temp1 = max(y,x),temp2=min(y,x);
            if(temp1 == x){
                  cout<<temp1*temp1 - temp2 +1<<endl;}
            else
                  cout<<(temp1-1)*(temp1-1) + temp2<<endl;

      }
      return 0;
}
