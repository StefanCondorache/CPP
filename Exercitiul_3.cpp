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

int sum_digit_control(int a, int b){
    int i,n = 0;
    if (a>=1 and a<=9 and b>a and b<=(pow(10,7))){
        for (i=1;i<=b;i++){
            if (cc(i)==a){
                n+=1;
            }
        }
        return n;
    }
    else{
        return 1;
    }
}

int main(){
    int numar_a,numar_b;
    cout << "a = " ; cin >> numar_a; cout << "b = " ; cin >> numar_b; 
    cout << "output = " << sum_digit_control(numar_a,numar_b);
    return 0;
}