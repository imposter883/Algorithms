#include<bits/stdc++.h>
using namespace std;

string LCS(string A, string B){
	int n,m;

	n = A.length();
	m = B.length();

	// creating a 2D matrix using vector
	vector<vector<int>>dp(n+1,vector<int>(m+1,0));

	//creating a DP table
	for(int i=1; i<=n; i++){
		for(int j=1; j<=m; j++){
			if(A[i-1]==B[i-1]){
				dp[i][j]=dp[i-1][j-1]+1;
			}else{
				dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
			}
		}
	}

	string lcs="";

	int i=n,j=m;

	// Store the values in lcs
	while(i>0 && j>0){
		if(A[i-1]==B[j-1]){
			lcs+=A[i-1];
			--i;
			--j;
		}else if(dp[i-1][j]>dp[i][j-1]){
			--i;
		}else{
			--j;
		}
	}

	reverse(lcs.begin(),lcs.end());
	return lcs;
}

int main(){
	string A,B;
	cin>>A>>B;

	string result = LCS(A,B);

	cout<<result<<endl;

	return 0;

}