//https://codeforces.com/problemset/problem/984/A
#include<bits/stdc++.h>

using namespace std;

auto main()->int{
    int n;
    cin>>n;
    vector<int> p;
    for(int i = 0; i<n; i++){
        int x;
        cin>>x;
        p.push_back(x);
    }
    sort(p.begin(), p.end());
    for(int i=1; i<n; i++){
        if(i%2 != 0) p.pop_back();
        else p.erase(p.begin());
    }
    int f = p.front();
    cout<<f;
    return 0;
}
