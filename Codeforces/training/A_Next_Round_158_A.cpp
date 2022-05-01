#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, k, part=0;
    cin>>n>>k;
    vector<int> a;
    for(int i = 0; i<n; i++){
        int x;
        cin>>x;
        a.push_back(x);
    }
    for(int i=a.size()-1; i>=0; i--){
        if( a[i]>= a[k-1] and a[i]> 0) part++;
    }
    cout<<part;
    return 0;
}