//https://codeforces.com/problemset/problem/1296/A
#include<bits/stdc++.h>

using namespace std;

auto main()->int{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        int a, imp = 0, par = 0; //imp = odd & par = even
        cin>>a;
        int A[a];
        for(int j = 0; j<a; j++)cin>>A[j];
        int sum = 0;
        for(int j =0; j<a; j++){
            if(A[j]%2 !=0 || A[j]==1) imp++;
            else par++;
            sum += A[j];
        }
        if(sum % 2 !=0 || sum == 1){
            cout<<"YES"<<"\n";
        }
        else{
            if(imp!=0 && par!=0) cout<<"YES"<<"\n";
            else cout<<"NO"<<"\n";
        }
    }
    return 0;
}