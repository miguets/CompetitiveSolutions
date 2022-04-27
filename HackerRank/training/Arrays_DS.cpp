#include <bits/stdc++.h>

using namespace std;
/*
entra en tiempo pero creo que se puede simplificar, la función consiste en el ultimo dato del vector pasarlo al primero y eliminar el ultimo para no repetirse, el problema es que si fuera una n = 10^6 no entraria el tiempo
*/
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
    for(int i=n; i<n; i++){
        int x;
        cin>>x;
        a.push_back(x);
    }
    reverseArray(&a, n);
    for(int j=0; j<n; j++) cout << a[j]<<' ';
    return 0;
}