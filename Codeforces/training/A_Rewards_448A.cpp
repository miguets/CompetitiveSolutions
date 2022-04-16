//https://codeforces.com/problemset/problem/448/A

#include<bits/stdc++.h>

using namespace std;

int main(){

    int a=0, b=0 ,n=0, na=0, nb=0;
    for(int i = 0; i<3; i++){
        int x;
        cin>>x;
        a+=x;
    }
    for(int j = 0; j<3; j++){
        int y;
        cin>>y;
        b+=y;
    }
    
    cin>>n;
    if(a != 0 and b != 0 and n == 1)cout<<"NO";
    else{
        na = a/5, a = a%5; 
        nb = b/10, b = b%10;
        if(n >= na + nb or n == na+nb){
            if(na + nb == n and a + b == 0)cout<<"YES"<<"here";
            else if( n - na - nb >= 2 )cout<<"YES";
            else if( ((na == 0 and a <= 5) or (nb == 0 and b <= 10 )) and (n )) cout << "YES";
            else if( (na + nb < n) and ( (a == 0) or (b == 0) )) cout << "YES";
            else cout<<"NO";
        }
        else cout<<"NO"; 
    }
    return 0;
}