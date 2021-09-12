#include <bits/stdc++.h>

using namespace std;

auto main()->int{
    int n, suma =0;
    vector<int> c;
    cin>>n;
    cout<<n;
    for(int i = 0; i<n; i++){
        suma =0;
        for(int j=0; j<4; j++){
            int a;
            cin>>a;
            suma+=a;
        }
        if(suma%3 == 0){
            c.push_back(1);
        }
        else{
            c.push_back(0);
        }
    }
    for(int i=0; i<n; i++){
        if(c[i]==1)cout<<"YES"<<"\n";
        else cout<<"NO"<<"\n";
    }
}