#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, ci = 1000,a1 = 1000,a2 = 1000;
    cin >> n;
    char a[n][5];
    for(int i = 0; i<n; i++){
       for(int j = 0; j<5; j++){
            char x;
            cin >> x;
            a[i][j] = x;
            if(x=='O' && a[i][j-1] == 'O' && j!=0 && ci == 1000 && a1 == 1000 && a2 == 1000){
                ci = i;
                a1 = j-1;
                a2 = j;
            }
        }
    }

    if(ci == 1000) cout<<"NO";
    else{
        cout<<"YES"<<endl;
        a[ci][a1] = '+';
        a[ci][a1+1] = '+';
        for(int i = 0; i<n; i++){
            for(int j = 0; j<5; j++){
                cout << a[i][j];
            }
        cout<<"\n";
        }
    
    }

    return 0;
}