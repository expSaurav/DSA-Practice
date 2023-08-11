 #include <iostream>
#include <vector>
using namespace std;

int peakElement(vector<int>arr,int size){
  int s=0;
  int e=size-1;
  
  while(s<e){
    int mid = s + (e -s)/2;
    if(arr[mid]<arr[mid+1]){
      s = mid + 1;//it can right search
    }
    else{
      e = mid; 
    }

  }
  return s;
}

int main() {


  vector<int> arr;
	int n;
  cout<<"enter n: ";
  cin>>n;
  int size=n;
	cout<<"enter all elements upto "<<n<<endl;
     for(int i=0; i<n; i++){
	int k;
	cin>>k;
	arr.push_back(k);
}
  cout<<peakElement(arr,size)<<" is the index of Peak Element. ";
  
  return 0;
}