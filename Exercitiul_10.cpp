#include <iostream>
#include <math.h>
using namespace std;

int prim(int n){
    int i,j = 2;
    for(i=2;i<=n/2+1;i++){
        if (n%i==0){
            j+=1;
        }}
    if (j==2){
        return true;
    }
    else{
        return false;
    }
}

int i_prim(int n){
    int p1,p2,suma;
    p1 = n-1;
    p2 = n+1;
    while (not prim(p1)){
        p1-=1;
    }
    while (not prim(p2)){
        p2+=1;
    }
    suma = p2 - p1;
    cout << "p1 = " << p1 << "\n";
    cout << "p2 = " << p2 << "\n";
    cout << "suma = ";
    return suma;
}


int main(){
    int numar;
    cout << "numar; "; cin >> numar;
    if (numar>2 and numar<999999999){
        cout << i_prim(numar);
    } 
    return 0;
}