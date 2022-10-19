#include <iostream>
#include <vector>
using namespace std;

void cmmdec(int n, int m,int &raspuns){
    int j=0;
    int i;
    vector<int> divizori_n;
    for (i=1;i<=n/2;i++){
        if (n%i==0){
            divizori_n.push_back(i);
        }
    }
    divizori_n.push_back(n);
    for (j=0;j<divizori_n.size();j++){
        if (j==0){
            raspuns=0;
        }
        if (m%divizori_n[j]==0 and divizori_n[j]>raspuns){
            raspuns = divizori_n[j];
    }   
    }
}
int main(){
    int numar1,numar2,rasp;
    cout << "numar1 = "; cin >> numar1;
    cout << "numar2 = "; cin >> numar2;
    cmmdec(numar1,numar2,rasp);
    cout << rasp;
    return 0;
}