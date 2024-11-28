#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;

	vector<int>arr(n);

	for(int i=0; i<n; i++){
		cin>>arr[i];
	}

	sort(arr.begin(),arr.end());

	int count=1;

	for(int i=1; i<n; i++){
		if(arr[i-1]!=arr[i]){
			count++;
		}
	}

	cout<<count<<endl;

	return 0;
}