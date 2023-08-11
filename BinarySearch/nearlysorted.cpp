#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int>arr,int target){
	int s = 0;
	int e = arr.size()-1;
	int mid = s + (e - s)/2;
	
	while(s<=e){
	
	if(arr[mid]==target) return mid;
	if(arr[mid-1]==target) return mid-1;
	if(arr[mid+1]==target) return mid+1;
	
	if(target>arr[mid]){
	s = mid + 2;
}
	else{
	e = mid - 2;
}
	mid = s + (e - s)/2;
}
	return -1;
}

int main() {
  cout<<"Binary search in nearly sorted array {10,3,40,20,50,80,70}  "<<endl;
  vector<int> arr = {10,3,40,20,50,80,70};
int target;	
cout<<"enter target"<<endl;
	cin>>target;
 

  int ans = binarySearch(arr,target);
  
	cout<<"index is " << ans<<endl;
	cout<<"value is " <<arr[ans];
  return 0;
}