//https://codeforces.com/contest/1676/problem/A
#include<bits/stdc++.h>

using namespace std;


int main(){
    int n; cin>>n;
    while(n--){
        string x;
        cin>>x;
        int fs = x[0]-'0' + x[1]-'0' + x[2]-'0', ls = x[3]-'0' + x[4]-'0' + x[5]-'0';
        if(fs == ls) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}