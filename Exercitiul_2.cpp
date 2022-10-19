#include <iostream>
#include <math.h>
using namespace std;

int cc(int numar){
    int suma = 0;
    while (numar!=0){
        suma += numar%10;
        numar/=10;
    }
    if (suma>=10){
        return cc(suma);
    }
    else{
        return suma;
    }
}

int main(){
    int cifra_control;
    cin >> cifra_control;
    cout << cc(cifra_control);
    return 0;
}
