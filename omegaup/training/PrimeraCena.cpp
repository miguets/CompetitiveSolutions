//  https://omegaup.com/arena/problem/Preparativos-para-la-cena/

#include<bits/stdc++.h>

using namespace std;

int main(){
    int N, M, Z; cin>>N>>M>>Z;
    vector<int> A; for(int i = 0; i< N; i++) A.push_back(M);
    while(Z--){
        int x , y; cin>>x>>y;
        A[y-1] -= x;
    }
    for(int j =0; j<A.size(); j++) cout<<A[j]<<" ";
}