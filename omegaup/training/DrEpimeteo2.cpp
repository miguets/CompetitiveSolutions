//  https://omegaup.com/arena/problem/El-contraataque/

#include<iostream>

using namespace std;

int main(){
    int n , a; cin>>n>>a;
    char s = '*';
    for(int i = 0; i<n; i++){
        for(int j=0, x = 1; j<a; j++, x++){
            for(int k = 0; k<x; k++) cout<<s;
            cout<<"\n";
        }
        cout<<"\n";
    }
    return 0;
}