//  https://omegaup.com/arena/problem/Primer-enfrentamiento-contra-el-/

#include<iostream>

using namespace std;

int main(){
    int a, b, c, d;
    cin >> a >> b >> c;
    cout<<"Ataque completado, Dr. Epimeteo fuera de combate\n";
    d = (a-c)/b;
    if((a-c)%b != 0) d++;
    cout<<d;
    return 0;
}