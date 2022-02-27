#include <iostream>
#include <vector>
#include <fstream>


using std::vector;
using std::cout;
using std::endl;

int main(int argc, char const *argv[])
{
      std::ifstream iff("input.txt");
      int n,m;
      iff>>n;
      iff>>m;
      cout<<n<<endl;
      cout<<m;
      return 0;
}
