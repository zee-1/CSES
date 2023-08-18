#include <iostream>
#include <vector>

using std::vector;

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
            bool firstCol = false;           // to check if the first cell is 0 or not
            
            auto m = matrix[0].size();
            auto n = matrix.size();
            
            for(size_t i = 0; i<n; i++){
                  if(!matrix[i][0])
                        firstCol = true;
            }
            for(size_t j = 1; j<m; j++){
                  if(!matrix[0][j])
                        matrix[0][0] = 0;
            }
            for(size_t i = 1; i<n; i++){
                  for(size_t j = 1; j<m; j++){
                        if(!matrix[i][j]){
                              matrix[i][0] = 0;
                              matrix[0][j] = 0;
                        }
                  }
            }

            for(size_t i = 1; i<n; i++){
                  for(size_t j = 1; j<m; j++){
                        if(!matrix[0][j] or !matrix[i][0]){
                              matrix[i][j] = 0;
                              matrix[i][j] = 0;
                        }
                  }
            }
            if(!matrix[0][0])
                  for(size_t i = 1; i<m; i++)
                        matrix[0][i] = 0;

            if(firstCol)
                  for(size_t i = 0; i<n; i++)    
                        matrix[i][0] = 0;
  
            std::cout<<int(firstCol)<<std::endl;
            for(auto i:matrix){
                  for(auto j:i){
                        std::cout<<j<<" ";
                  };
                  std::cout<<std::endl;
            };
    }

};

int main(int argc, char const *argv[])
{
      Solution s;
      vector<vector<int>> mat = {{1,0}};
      s.setZeroes(mat);
      return 0;
}
