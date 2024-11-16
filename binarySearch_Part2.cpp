#include<bits/stdc++.h>
using namespace std;

int lowerBounds(vector<int> &arr, int find){
	int low=0, high=arr.size()-1;
	int mid;

	while(high-low>1){

		mid=(high+low)/2;

		if(arr[mid]<find){
			low=mid+1;
		}else{
			high=mid;
		}
	}

	if(arr[low]>=find){
		return low;
	}

	if(arr[high]>=find){
		return high;
	}

	return-1;
}

int upperBounds(vector<int> &arr, int find){
	int low=0, high=arr.size()-1;
	int mid;

	while(high-low>1){
		mid=(high+low)/2;

		if(arr[mid]<=find){
			low = mid+1;
		}else{
			high=mid;
		}
	}

	if(arr[low]>find){
		return low;
	}

	if(arr[high]>find){
		return high;
	}

	return -1;
}

int main(){
	int n;
	cin>>n;

	vector<int>arr(n);
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}

	sort(arr.begin(),arr.end());

	int find;
	cin>>find;

	int lb = lowerBounds(arr,find);
	int up = upperBounds(arr,find);

	cout<<lb<<" "<<arr[lb]<<endl;
	cout<<up<<" "<<arr[up]<<endl;

	return 0;
}