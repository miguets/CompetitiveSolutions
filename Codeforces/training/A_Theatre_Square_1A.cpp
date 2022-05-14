//https://codeforces.com/problemset/problem/1/A
#include<bits/stdc++.h>

using namespace std;

int main(){
    int a,m,n;
    cin>>n>>m>>a;
    long long int cm = m / a, cn = n / a;
    if((n>a and n%a != 0) or (a>n and n>=1)){
            cn++;
        }
    if((m>a and m%a != 0) or (a>m and m>=1)){
            cm++;
        }
    cout<<cm*cn;
    return 0;    
}