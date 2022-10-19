#include <iostream>
using namespace std;

void factorial(int n,unsigned long long int &f){
        if (n==0){
            f=1;
        }
        else{
            factorial(n-1,f);
            f*=n;
        }
}

int main(){
    long long int f;
    int n;
    cout << "n: " ; cin >> n;
    if (n<=10){
        factorial(n,f); cout << f;
        return 0;
        }
    
}
