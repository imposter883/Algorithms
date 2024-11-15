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

    int find;
    cin>>find;

    int l=0, h=n-1;

    int mid;

    while(h-l>1){
        mid=(l+h)/2;
        if(arr[mid]<find){
            l=mid+1;
        }else{
            h=mid;
        }
    }

    if(arr[l]==find){
        cout<<l<<endl;
    }else if(arr[h]==find){
        cout<<h<<endl;
    }else{
        cout<<"Not Found";
    }

    return 0;
}