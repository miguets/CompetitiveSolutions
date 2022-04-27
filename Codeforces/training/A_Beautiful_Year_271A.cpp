//https://codeforces.com/problemset/problem/271/A/
#include<bits/stdc++.h>

using namespace std;

bool cond(int a,int b,int c,int d){
    if(a!=b and a!=c and a!=d and b !=c and b != d and c != d){
        return true;
    }
    return false;
}
int main(){
    bool s = false;
    int a,b,c,d,y;
    cin>>y;

    do{
        y++;
        a = y/1000;  
        b = (y/100)%10;
        c = (y/10)%10;
        d = (y/1)%10;

        s = cond(a,b,c,d);
    }while(s!=true);

    cout<<y;

    //cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<y<<endl;
    return 0;
}