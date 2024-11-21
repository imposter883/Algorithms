#include<bits/stdc++.h>
using namespace std;
int main(){
	string str;
	cin>>str;

	string ans="";

	for(auto c:str){
		bool duplicate = false;
		for(auto r:ans){
			if(c==r){
				duplicate=true;
				break;
			}
		}
		if(!duplicate){
			ans+=c;
		}
	}

	cout<<ans<<endl;

	return 0;
}