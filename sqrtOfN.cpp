/*Find the squre root of n using binary search*/
#include<bits/stdc++.h>
using namespace std;
double eps=1e-6;
int main(){
	double n;
	cin>>n;

	double high=n,low=1,mid;

	while(high-low>eps){
		mid=(high+low)/2;

		if(mid*mid<n){
			low=mid;
		}else{
			high=mid;
		}
	}
	cout<<low<<endl;

	return 0;
}