//https://codeforces.com/problemset/problem/485/A
#include <bits/stdc++.h>
using namespace std;
auto main()->int{
    int n, m, x, check = 100;

    cin>>n>>m;

    while(check--){
        x = n%m;
        if(x==0){
            cout<<"Yes";
            return 0;
        }
        n+=x;
    }

    cout<<"No"<<"\n";
    return 0;
}
