#include <iostream>
#include <cmath>
using namespace std;

// sa se afle daca triunghiul se afla in interiorul sau exteriorul triunghiului, duap coordonate

float aria(float x,float y,float z){
    float perimentru = x+y+z;
    float p1=perimentru/2;
    float ariat = sqrt((p1)*(p1-x)*(p1-y)*(p1-z));
    return ariat;
}

int main(){
    float xa,xb,xc,ya,yb,yc,xp,yp;
    cout << "coordonate punct A= "; cin >> xa >> ya;
    cout << "coordonate punct B= "; cin >> xb >> yb;
    cout << "coordonate punct C= "; cin >> xc >> yc;
    cout << "coordonate punct P= "; cin >> xp >> yp;
    
    float latura_ab=sqrt(pow((xa-xb),2)+pow((ya-yb),2));
    float latura_bc=sqrt(pow((xb-xc),2)+pow((yb-yc),2));
    float latura_ac=sqrt(pow((xa-xc),2)+pow((ya-yc),2));

    float ariat1 = aria(latura_ab,latura_bc,latura_ac);

    float latura_ap=sqrt(pow((xa-xp),2)+pow((ya-yp),2));
    float latura_bp=sqrt(pow((xb-xp),2)+pow((yb-yp),2));
    float latura_cp=sqrt(pow((xc-xp),2)+pow((yc-yp),2));
    
    if ((latura_ap+latura_bp==latura_ab )or (latura_ap+latura_cp==latura_ac) or (latura_cp+latura_bp==latura_bc)){
        cout << "punctul P se afla pe latura triunghiului ABC";}
    else{
        if (((aria(latura_ap,latura_bp,latura_ab)+aria(latura_ap,latura_cp,latura_ac)+aria(latura_cp,latura_bp,latura_bc))>aria(latura_ab,latura_ac,latura_bc)) or\
        ((aria(latura_ap,latura_bp,latura_ab)+aria(latura_ap,latura_cp,latura_ac)+aria(latura_cp,latura_bp,latura_bc))>aria(latura_ab,latura_ac,latura_bc)) or \
        ((aria(latura_ap,latura_bp,latura_ab)+aria(latura_ap,latura_cp,latura_ac)+aria(latura_cp,latura_bp,latura_bc))>aria(latura_ab,latura_ac,latura_bc))){
            cout << "punctul P se afla in extriorul triunghiului ABC";
        }
        else{
            cout << "punctul P se afla in interiorul triunghiului ABC";}
    }
    return 0;
}