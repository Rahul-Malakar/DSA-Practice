#include<bits/stdc++.h>

using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

void recurse(int t){
    if(!t)return;

    if(t==1) cout<<t;
    else cout<<t<<" ";
    recurse(t-1);
}

int main(){

    fast_io;

    int t; cin>>t;

    recurse(t);
    
    return 0;
}