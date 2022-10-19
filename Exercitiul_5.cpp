#include <iostream>
#include <math.h>
using namespace std;

int OddEqual(int n){
    int i = 1;
    int impar = 0;
    int cifra;
    while ((impar == 0) and (n!=0)){
        cifra = n%10;
        if ((cifra%2)!=0){
            impar = cifra;
            break;
        }
        else{
            n/=10;
        }
    }
    if (impar == 0){
        return 2;
    }
    while (i and n!=0){
        cifra = n%10;
        if ((cifra%2!=0) and (cifra==impar)){
            i=1;
            n/=10;
        }
        else{
            if (cifra%2==0){
                n/=10;
            }
            else{
                i=0;
                break;
            }
        } 
    }
    return i;

}

int main(){
    int numar;
    cout << "numar: "; cin >> numar;
    if (numar>=10 and numar<=pow(10,9)){
        cout << OddEqual(numar);
    }
    return 0;
}