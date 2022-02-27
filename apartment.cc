// Time bound error

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

void swap(int& a, int& b){
      int t = a;
      a     = b;
      b     = t;
}

int sell_apertment(int appli[],int aprt[],int chng,int n1, int n2){
      int ans=0;int n_=0;
      for(int i=0;i<n1; i++){
            for(int j=0;j<n2-n_;j++){
                  if((appli[i]>=(aprt[j]-chng)) && (appli[i]<=(aprt[j]+chng))){
                        swap(aprt[j],aprt[n2-1-n_]);
                        ans++;n_++;
                        break;
                  }
            }
      }
      return ans;
}
int main(int argc, char const *argv[])
{
      int n1=0,n2=0,chng=0;
      cin>>n1>>n2>>chng;
      int appli[n1];
      int aprt[n2];
      for(int i=0; i<n1;i++){
            cin>>appli[i];
      }
      for(int i=0; i<n2;i++){
            cin>>aprt[i];
      }
      cout<<sell_apertment(appli,aprt,chng,n1,n2)<<endl;
      return 0;
}
