#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;

    map<string, int>m;

    for(int i=0; i<n; i++){
        string str;
        cin>>str;

        m[str]++;
    }

    for(auto &pair:m){
        cout<<pair.first<<" "<<pair.second<<endl;
    }

    return 0;
}
