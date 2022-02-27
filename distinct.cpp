#include <iostream>
#include <algorithm>

using std::cin;
using std::cout;
using std::begin;
using std::end;
using std::endl;
int distinct(int* arr,int num){
      int count=0;
      std::sort(arr,arr+num);
      for(int i=0;i<num;i++){
            if(arr[i]!=arr[i+1]){
                  count++;
            }
      }

      return count;
}

int main(int argc, char const *argv[])
{
      int num;
      cin>>num;
      int arr[num];
      for(int i=0; i<num;i++){
            cin>>arr[i];
      }
      cout<<distinct(arr,num)<<endl;
      return 0;
}
