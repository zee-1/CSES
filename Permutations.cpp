#include <iostream>
#define lli long long int
using namespace std;
void print_even(lli n){
      lli start = n;
      if(n%2!=0){
            start--;
      }
      while(start){cout<<start<<" ";}
}

void print_odd(lli n){
      lli end = n;
      if(n%2!=1){
            end--;
      }
      lli i=1;
      while(i<=end){cout<<i<<" ";}
}

int main(int argc, char const *argv[])
{
      lli n;
      cin>>n;
      if(n==1)
            std::cout<<1<<std::endl;
      if(n<4){
            std::cout<<"NO SOLUTION"<<std::endl;
      }
      else{
            print_even(n);
            print_odd(n);
            
      }
      return 0;
}
