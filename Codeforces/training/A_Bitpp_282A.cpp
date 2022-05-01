#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, value = 0;
    cin>>n;
    for(int i = 0; i<n; i++){
        string x;
        cin>>x;
        if(x == "++X" or x == "X++")value++;
        else value--;
    }
    cout<<value;
    return 0;
}