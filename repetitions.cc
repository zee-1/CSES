#include <iostream>
#include <limits.h>
#include <math.h>
using namespace std;

int main(int argc, char const *argv[])
{     
      string inp = "";
      cin>>inp;
      char curr_char,prev_char;
      int i=0,curr_length=0,longest_so_far=INT_MIN;
      while(inp[i]){
            curr_char = inp[i];
            if(curr_length==0){
                  curr_length++;
            }else{
                  if(prev_char==curr_char)
                        curr_length++;
                  else
                        curr_length=1;
            }
            prev_char=curr_char;
            longest_so_far = max(longest_so_far,curr_length);
            i++;
      }
      std::cout<<longest_so_far<<std::endl;
      return 0;
}
