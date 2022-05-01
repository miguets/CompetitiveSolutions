//https://codeforces.com/problemset/problem/1673/A
#include<bits/stdc++.h>

using namespace std;

int ubicacion(char x){
    int cont = 0;
    if(x=='a')return cont = 1;
    if(x=='b')return cont = 2;
    if(x=='c')return cont = 3;
    if(x=='d')return cont = 4;
    if(x=='e')return cont = 5;
    if(x=='f')return cont = 6;
    if(x=='g')return cont = 7;
    if(x=='h')return cont = 8;
    if(x=='i')return cont = 9;
    if(x=='j')return cont = 10;
    if(x=='k')return cont = 11;
    if(x=='l')return cont = 12;
    if(x=='m')return cont = 13;
    if(x=='n')return cont = 14;
    if(x=='o')return cont = 15;
    if(x=='p')return cont = 16;
    if(x=='q')return cont = 17;
    if(x=='r')return cont = 18;
    if(x=='s')return cont = 19;
    if(x=='t')return cont = 20;
    if(x=='u')return cont = 21;
    if(x=='v')return cont = 22;
    if(x=='w')return cont = 23;
    if(x=='x')return cont = 24;
    if(x=='y')return cont = 25;
    if(x=='z')return cont = 26;
}

int lastid(string x){
    int res = 0;
    if(x[0]>x[x.length()-1]){
        return res;
    }
    else if(x[0]<x[x.length()-1]){
        return res = x.length();
    }
    else{
        for(int i = 1, j = x.length()-2; i <x.length()-2; i++, j--){
            if(x[i]>x[j]){
                return res;
            }
            else if(x[i]<x[j]){
                return res = x.length();
            }
        }
    }
}

int main(){
    string p1 = "Alice ", p2 = "Bob ";
    int letz=26;
    int n;
    cin>>n;
    for(int i = 0; i<n; i++){
        string cases;
        int len, sum= 0, dif = 0, resultado;
        cin>>cases;
        len = cases.length();
        if(len == 1){
            sum += ubicacion(cases[0]);
            resultado = sum;
            cout<<p2<<resultado<<endl;
        }
        else{
            if(len%2 == 0){
                for(int j = 0; j<len; j++) sum += ubicacion(cases[j]);
                resultado = sum;
                cout<<p1<<resultado<<endl;
            }
            else{
                int init = lastid(cases);
                if(init == 0)for(int j = 0; j<len - 1 ; j++) sum += ubicacion(cases[j]);
                else for(int j = len-1; j >= 1 ; j--) sum += ubicacion(cases[j]);
                if(init == 0)dif += ubicacion(cases[len-1]);
                else dif += ubicacion(cases[0]);
                sum-=dif;
                resultado = sum;
                cout<<p1<<resultado<<endl;
            }
        }
    }
    return 0;
}