//https://codeforces.com/problemset/problem/686/A
#include<bits/stdc++.h>
using namespace std;

int main(){
    int s, q, a, t = 0;//barras de chocolate , gente de la fila, barras dorr , niños tristes xd
    char dorr; //donar o recibir
    cin >> q >> s;
    long long int sa;
    sa = s;
    for(int i = 0; i < q; i++){
        cin>>dorr;
        cin>>a;
        if(dorr == '+') sa+= a;//recibir
        else if(a <= sa) sa-=a; //tristes
        else t++; //donar
    }
    cout<<sa<<" "<<t<<"\n";
    return 0;
}
