//https://codeforces.com/contest/58/problem/A
#include<bits/stdc++.h>

using namespace std;

int main(){
    int c=0;
    string s, hello = {"hello"};
    cin>>s;
    for(int i = 0; i<s.length(); i++){
        if(s[i] == hello[c]) c++;

        if(c==5){
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
    return 0;
}
