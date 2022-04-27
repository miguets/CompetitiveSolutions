//https://codeforces.com/contest/71/problem/A
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i = 0; i<n; i++){
        string cad;
        cin>>cad;
        if(cad.length()>10)cout<<cad[0]<<cad.length()-2<<cad[cad.length()-1]<<"\n";
        else cout<<cad<<"\n";
    }
    return 0;
}