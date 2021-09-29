//A. Football    https://codeforces.com/problemset/problem/96/A
#include <bits/stdc++.h>

using namespace std;

auto main()->int{
    int a = 0,b = 0;
    string s;
    cin>>s;
    int j = s.length();
    for(int i = 0; i<=j; i++){
        if(s[i] == '0'){
            b = 0;
            a+=1;
        }
        else{
            a = 0;
            b+=1;
        }
        if(a ==7 or b == 7){
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
    return 0;
}