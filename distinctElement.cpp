#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;

	vector<int>arr(n);

	for(int i=0; i<n; i++){
		cin>>arr[i];
	}

	sort(arr.begin(),arr.end());

	vector<int>vec;

	for(int i=0; i<n; i++){
		if(arr[i]!=arr[i-1]){
			vec.push_back(arr[i]);
		}
	}

	for(int i=0; i<vec.size(); i++){
		cout<<vec[i]<<" ";
	}
	cout<<endl;

	return 0;
}