#include <iostream>
using namespace std;
int main(){
    int i;
    cin >> i;
    int a=i-((i/12)*12);
    int b=i/12%5;
    switch (a){
        case 4: cout << "sobolan  ";break;
        case 5: cout << "taur  ";break;
        case 6: cout << "tigru  ";break;
        case 7: cout << "iepure  ";break;
        case 8: cout << "dragon  ";break;
        case 9: cout << "sarpe  ";break;
        case 10: cout << "cal  ";break;
        case 11: cout << "berbec  ";break;
        case 0: cout << "maimuta  ";break;
        case 1: cout << "cucos  ";break;
        case 2: cout << "caine  ";break;
        case 3: cout << "porc  ";break;
    }
    switch (b){
        case 0: cout << "verde ";break;
        case 1: cout << "rosu ";break;
        case 2: cout << "galben ";break;
        case 3: cout << "alb "; break;
        case 4: cout << "negru ";break;
    }

}