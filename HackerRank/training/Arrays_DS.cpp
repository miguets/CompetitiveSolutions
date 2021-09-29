//arrays-ds  https://www.hackerrank.com/challenges/dynamic-array/problem
#include <bits/stdc++.h>

using namespace std;

vector<int> reverseArray(vector<int>* a, int n) {
    for(int i = 0; i<n; i++){
        int aux = a->back();
        a->pop_back();
        a->insert(a->begin()+i, aux);
    }
    return *a;
}


int main(){
    vector<int>a;
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        a.push_back(x);
    }
    reverseArray(&a, n);
    for(int j=0; j<n; j++) cout << a[j]<<' ';
    return 0;
}