#include <iostream>
#include <math.h>
using namespace std;

float float_number(int x, float y){
    double numar = 0;
    if (x > 0 and x <= 1000 and y > 0 and y <= 1000){
        numar += x;
        if (y<10){
            numar += y/10;
        }
        if (y>=10 and y<100){
            numar += y/100;
        }
        if (y>=100 and y<1000){
            numar += y/1000;
        }
    } 
    return numar;
    }

int main(){
    int intreg,zecimal;
    cout << "partea intreaga: "; cin >> intreg; cout << "partea zecimala: "; cin >> zecimal;
    cout << float_number(intreg,zecimal);
    return 0;
}