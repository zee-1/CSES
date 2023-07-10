#include<iostream>
#define lli long long int

using namespace std;

int main(int argc, char const *argv[])
{
      int n;
      cin>>n;


      lli inp[n],moves=0;
      for (size_t i = 0; i < n; i++){
            int temp=0;cin>>temp;
            inp[i]=temp;
      }
      for (size_t i = 1; i < n; i++)      {
            if(inp[i]<inp[i-1]){
                  moves += inp[i-1]-inp[i];
                  inp[i] = inp[i-1];
            }
      }
      
      std::cout<<moves<<std::endl;
      return 0;
}
