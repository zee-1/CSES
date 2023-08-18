#include <iostream>
#include <vector>

using std::vector;

vector <int> nthRowPascalTri(unsigned int row){
      vector<int> pascalRow;
      pascalRow.push_back(1);
      for(size_t i=0; i<row; i++){
            auto k = i+1;
            auto num = (pascalRow[i] * (row+1-k))/k;
            pascalRow.push_back(num);
      }

      return pascalRow;
}

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> sol;
        for(size_t i =0; i<numRows; i++){
            auto row = nthRowPascalTri(i);
            sol.push_back(row);
        }
      return sol;
    }
};

int main(int argc, char const *argv[])
{
      Solution s;
      auto ans = s.generate(5);

      for(auto i:ans){
            for(auto j:i){
                  std::cout<<j<<" ";
            };
            std::cout<<std::endl;
      };
      return 0;
}
