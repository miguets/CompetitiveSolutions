//https://codeforces.com/contest/1675/problem/A
#include<bits/stdc++.h>

using namespace std;

int main(){
    unsigned int n;
    cin>>n;
    for(unsigned int i = 0, temp; i<n; i++){
        long int a, b, c, x ,y;
        cin>> a >> b >> c >> x >> y;
        x -= a;
        if(x>0 and c >=0){//perros no alimentados con a
            temp = x;
            x-=c;
            c-=temp;
        }
        y-=b;
        if(y>=0 and c>0){
            temp = y;
            y-=c;
            c-=temp;
        }
        if(x<=0 and y<=0) cout<< "YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}