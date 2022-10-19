#include <iostream>
#include <math.h>
using namespace std;

void factorial(int n,int &f){
        if (n==0){
            f=1;
        }
        else{
            factorial(n-1,f);
            f*=n;
        }
}

int sumafactcifre(int n){
    int suma = 0;
    int f;
    while (n!=0){
        factorial(n%10,f);
        suma += f;
        n/=10;
    }   
    return suma;
}

int main(){
    int f;
    int numar;
    cout << "numar; "; cin >> numar;
    if (numar<2*pow(10,9)){cout << sumafactcifre(numar);}
    return 0;
}