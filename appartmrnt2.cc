#include <iostream>
#include <algorithm>

using std::sort;
using std::cin;
using std::cout;




int sell_appart(int a[], int b[], int chng, int as,int bs){

      sort(b,b+bs);
      sort(a,a+as);
      int ans=0;
      int i=0,j=0;
      while (true){
            if(i==as)
                  break;
            if(j==bs)
                  break;
            if(a[i]<(b[j]-chng))
                  i++;
            else if(a[i]>(b[j]+chng))
                  j++;
            else{
                  ans++;
                  i++;
                  j++;
            }
      }

      return ans;
}

int main(int argc, char const *argv[])
{
      int n1=0,n2=0,chng=0;
      cin>>n1>>n2>>chng;
      int a[n1],b[n2];
      for(int i=0; i<n1;i++) cin>>a[i];
      for(int i=0; i<n2;i++) cin>>b[i];

      cout<<sell_appart(a,b,chng,n1,n2)<<std::endl;
      return 0;
}
