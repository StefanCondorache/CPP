#include <iostream>
#include <math.h>
using namespace std;

// sa se afle numarul oglindit

int main(){
    int numar,numar_out;
    numar_out=0;
    cout << "numar = "; cin >> numar;
  if (numar>0 and numar<(pow(10,9))){
    while (numar!=0){
        numar_out=numar_out*10+(numar%10);
        numar/=10;
    }
    cout << numar_out;
    return 0;}
}