#include<iostream>
 
using namespace std;
 
int main(){
 
    int ci, cj,cont = 0;
    int mtz[5][5];
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            int x;
            cin>>x;
            if(x==1){
                ci = i, cj = j;
            }
            mtz[i][j] = x;
        }
    }
   if(mtz[2][2] == 1) {
       cout<<0;
       exit(0);
   }
   if(ci>2){
    cont += ci-2;
   }
   if(ci<2){
       cont += 2-ci;   
    }
   if(cj>2){
    cont += cj-2;
   }
   if(cj<2){
    cont += 2-cj;
   }
   cout<<cont;
    return 0;
}