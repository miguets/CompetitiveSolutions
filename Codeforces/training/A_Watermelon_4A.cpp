#include<bits/stdc++.h>
using namespace std;

int main(){
    int s;
    cin >> s; // peso de la sandia
    bool x = (s>2 and s<=100);
    if(s%2 == 0 and x) cout<<"YES"<<"\n";
    else cout<<"NO"<<"\n";
    return 0;
}