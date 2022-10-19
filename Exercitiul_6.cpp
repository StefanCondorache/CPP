#include <iostream>
#include <math.h>
using namespace std;

int suma_div(int n){
    int i,suma = 0;
    for(i=1;i<=n/2;i++){
        if (n%i==0){
            suma+=i;
        }
        else{
            continue;
        }
    
    }
    return suma;
}

int main(){
    int numar;
    cout << "numar; "; cin >> numar;
    if (numar <= 2*pow(10,9)){
        cout << "suma divizorilor = " << suma_div(numar);
    }
    return 0;
}