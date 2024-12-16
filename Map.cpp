#include<bits/stdc++.h>
using namespace std;

void print(map<int,string> &m){
    int n = m.size();

    for(auto &pair: m){
        cout<<pair.first<<" "<<pair.second<<endl;
    }
}

int main(){
    map<int, string> m;

    m[1] = "a";
    m[5] = "b";
    m[3] = "c";
    m.insert({4,"d"});

    print(m);

    return 0;

}
