#include <iostream>
using namespace std;

bool printFound(int arr[][4], int r, int c, int t){
  int s=0;
  int e= r*c-1;


  while(s<=e){

      int mid = s + (e - s)/2;
      int rowIndex = mid/c;
     int colIndex = mid%c;
     int element = arr[rowIndex][colIndex];

    if(t==element){
      return true;
    }
    if(element<t){
      s = mid + 1;
    }
    if(element>t){
      e = mid - 1;
    }

  }
  return false;
}

int main() {

cout<<"we are going to find elements in 2d array"<<endl;
  int arr[4][4]={  {1,2,3,4}, {5,6,7,8}, {9,10,11,12}, {13,14,15,16}  };
  int r=4;
  int c=4;
  int t=5;

  bool ans= printFound(arr,r,c,t);

  if(ans != 0){
    cout<< "Target  found";

  }
  else{
    cout<<"target not found ";
  }

 return 0;
}