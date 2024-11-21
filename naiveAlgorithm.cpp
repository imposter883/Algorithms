/*Find the occurance of a word in a string*/
#include<bits/stdc++.h>
using namespace std;
int main(){
	string str,s;
	cin>>str>>s;

	int n = str.length();
	int m = s.length();

	int count = 0;

	for(int i=0; i<=n-m; i++){
		int j;
		for(j=0; j<m; j++){
			if(str[i+j]!=s[j]){
				break;
			}
		}
		if(j==m){
			count++;
		}
	}

	cout<<count<<endl;

	return 0;
}