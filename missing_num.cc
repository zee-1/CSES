#include <iostream>
# define lli long long int
using namespace std;

int main(int argc, char const *argv[])
{
      lli n;
      cin>>n;
      lli sum = n*(n+1)/2;
      for (size_t i = 0; i < n-1; i++){
            int temp;
            cin>>temp;
            sum-=temp;
      }
      std::cout<<sum<<std::endl;
      return 0;
}
