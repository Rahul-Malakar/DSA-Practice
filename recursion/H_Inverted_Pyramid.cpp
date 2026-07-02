#include<bits/stdc++.h>

using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

void rec(int s, int t){
    if(t<1){
        return;
    }

    for(int i=0; i<s; i++){
        cout<<" ";
    }
    for(int i=0; i<t; i++){
        cout<<"*";
    }
    cout<<endl;
    rec(s+1, t-2);
}

int main(){

    fast_io;

    int t; cin>>t;

    rec(0, 2*t-1);

    return 0;
}