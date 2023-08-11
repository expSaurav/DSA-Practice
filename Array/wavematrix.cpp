#include <iostream>
#include <vector>
using namespace std;

int printWave(vector<vector<int>>v){
  vector<int>ans;
  int m = v.size();
  int n = v[0].size();


  int rowStart = 0;
  int rowEnd = m -1;
  int colStart = 0;
  int colEnd = n-1;

  for(int i=colStart; i<=colEnd; i++){
    if((i & 1 ) == 0 ){
      for(int j=rowStart; j<=rowEnd; j++)
         cout<<v[j][i]<<" ";
      
      
     
    }

    else{
      for(int j=rowEnd; j>=rowStart; j--)
      cout<<v[j][i]<<" ";
      

    }
  }
  // return ans;


}

int main() {

 vector<vector<int>>v=
 {{1,2,3,4},
 {5,6,7,8},
 {9,10,11,12},
 {13,14,15,16}};

 printWave(v);

  

  return 0;
}