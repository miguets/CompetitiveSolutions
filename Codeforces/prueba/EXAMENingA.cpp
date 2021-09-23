https://codeforces.com/problemset/problem/151/A
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k, ml, l ,r, g ,x ,y;//invitados, botellas de, ml x botella, limones, rodajas, gramos de salsa, x mililitros del shot y y gramos de de salsa
    cin>>n>>k>>ml>>l>>r>>g>>x>>y;
    int cont_bote = (k * ml);//contenido botella
    int shots = cont_bote / x;//shots por botella
    int lps = l*r, sps = g/y; // limones por shot y salsa por shot
    int msl = min(shots,lps); 
    int spa = (min(msl,sps)/n);
    cout<<spa;
    return 0;
}
