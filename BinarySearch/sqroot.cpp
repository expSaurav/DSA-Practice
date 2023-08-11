#include <iostream>
#include <iomanip>
using namespace std;

double printSqroot(int n){
  int s=0;
  int e=n;
  int target = n;
  int ans = -1;
  int mid = s + (e - s)/2;

  while(s<=e){
    if(target == mid*mid){
      return mid;
    }
    else  if(mid*mid>target){
      e = mid -1;
    }
    else{
      ans = mid;
      s = mid + 1;
    }
    mid = s + (e - s)/2;

  }
  return ans;
}

int main() {
  int n;
  cout << "target" << endl;
  cin>>n;
  int target =n;
  int precision ;
  cout<<"enter precision upto decimal places: "<<endl;
  cin>>precision;


  double ans = printSqroot(n);
  

    double step = 0.1;
    double finalans;
  for(int i=0; i<precision; i=i+1){
    for(double j=ans; j*j<=target; j=step+j){
      ans = j;
     
    }
    step = step/10;
  

  }
  cout<<ans<<endl;
  return 0;
}