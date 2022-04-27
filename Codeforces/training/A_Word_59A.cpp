//https://codeforces.com/problemset/problem/59/A
#include<bits/stdc++.h>

using namespace std;

int main(){
    string s;
    int may = 0, min = 0;
    cin>>s;
    for(int i=0; i<s.length(); i++){
        if(s[i]>='a' and s[i]<= 'z'){
            min ++;
        }
        else if(s[i]>='A' and s[i]<= 'Z'){
            may++;
        }
    }
    if(may == min or min > may){
       for(int i=0; i<s.length(); i++){
           s[i] = tolower(s[i]);
       }
       cout<<s;
       return 0;
    }

    for(int i=0; i<s.length(); i++){
       s[i] = toupper(s[i]);
    }
    cout<<s;
    return 0;
}