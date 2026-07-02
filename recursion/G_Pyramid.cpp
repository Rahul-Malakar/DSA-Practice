#include<bits/stdc++.h>

using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

void recurse(int s, int t){
    if(s==t){
        return;
    }
    
    for(int i=0; i<=2*t-1;i++){
        if(i>=t-s-1 && i<=t+s-1){
            cout<<"*";
        }
        else if(i>=t+s-1)continue;
        else{
            cout<<" ";
        }
        
    }
    cout<<endl;

    recurse(s+1, t);
}

int main(){

    fast_io;

    int t; cin>>t;

    recurse(0,t);

    return 0;
}