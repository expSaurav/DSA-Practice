#include <iostream>
using namespace std;

double find(int dividend, int divisor){
  int s = 0;
  int e = dividend;
  int mid = s + (e - s)/2;
  int ans = -1;

  while(s<=e){
    if(mid*divisor == dividend){
      return mid;
    }
    if(mid*divisor < dividend){
      s = mid+1;
      ans = mid;
    }
    else{
      e = mid -1;
    }
    mid = s + (e - s)/2;
  }
  return ans;
}

int main() {
  int dividend;
  int divisor;
   int precision =2;

   cout<<"enter dividend "<<endl;
   cin>>dividend;

   cout<<"enter divisor "<<endl;
   cin>>divisor;

   cout<<"default precision is set to 2 decimal digits"<<endl;

  double ans = find(dividend,divisor);
  double step = 0.1;

  for(int i=0; i<precision; i++){
    for(double j=ans; j*divisor<=dividend; j+=step){
      ans = j;
    }
    step =step/10;
  }
  


  cout<<"Quotient is : "<<ans;
  return 0;
}