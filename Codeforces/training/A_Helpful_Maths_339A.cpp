//https://codeforces.com/problemset/problem/339
#include<bits/stdc++.h>

using namespace std;

int main(){
    string s, r;
    char sigma = '+';
    cin>>s;
    sort(s.begin(), s.end());
    for(int i = 0; i<s.length(); i++){
        if(s[i]!= sigma){
            r.push_back(s[i]);
            if(i == s.length()-1) break;
            else r.push_back(sigma);
        }
        
    }
    for(auto x:r) cout<<x;
    return 0;
}