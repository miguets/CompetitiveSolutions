//https://codeforces.com/problemset/problem/231/A
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, cont = 0;
    cin >>n;
    for(int i = 0; i<n; i++){
        int x,y,z,temp;
        cin>>x>>y>>z;
        temp = x + y + z;
        if(temp >= 2)cont++;
    }
    cout<<cont;
    return 0;
}