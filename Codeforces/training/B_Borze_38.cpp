#include<bits/stdc++.h>

using namespace std;

int main(){
    int  len;

    string cad, num;
    cin>>cad;
    len = cad.length();


    for(int i = 0; i <=len; i++){
        
        if(cad[i] == '-'){
            if(cad[i+1] == '.' and i+1<len){
                num += '1';
                i++;
            }
            else if(cad[i+1] == '-' and i+1<len){
                num += '2';
                i++;
            }
        }
        else if(cad[i] == '.' and (cad[i-1] != '-' or i < 0 or cad[i-2] == '-')){
            num += '0';
        }
    }
        cout<<num;

    return 0;
}
