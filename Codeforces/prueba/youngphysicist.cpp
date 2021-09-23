//young physicist https://codeforces.com/problemset/problem/69/A
#include <bits/stdc++.h>

using namespace std;

auto main()->int{
    int n, sumx = 0, sumy = 0, sumz = 0;//cases & sum

    cin>>n;
    
    for(int i=0; i<n; i++){
        int x,y,z;
        cin>>x>>y>>z;
        sumx += x;
        sumy += y;
        sumz += z;
    }

    if(sumx == 0 and sumy == 0 and sumz == 0)cout<<"YES"<<"\n";
    else cout<<"NO"<<"\n";

    return 0;
}
