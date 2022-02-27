#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int MaxChild(vector<int> arr, int num, int w){
      sort(arr.begin(),arr.end());
      int count=0,i=0, j=num-1;
      while(i<=j){
            if((arr[i]+arr[j])<=w)
                  i++;
            count++;j--;
      }
      return count;
};

int main(int argc, char const *argv[]){
      int n, mw;
      cin>>n>>mw;
      vector<int> arr(n);
      for(int i=0; i<n;i++) cin>>arr[i];
      cout<<MaxChild(arr,n,mw)<<endl;
      return 0;
}
