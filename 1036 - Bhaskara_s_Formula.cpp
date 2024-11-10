#include<bits/stdc++.h>
using namespace std;
int main(){
    double a,b,c,r1,r2;
    cin>>a>>b>>c;
    r1=(-b+sqrt((b*b)-(4*a*c)))/(2*a);
    r2=(-b-sqrt((b*b)-(4*a*c)))/(2*a);
    if(a==0 || ((b*b)-(4*a*c))<0) cout<<"Impossivel calcular"<<endl;
    else {
    cout<<"R1 = "<< setprecision(5) << fixed << r1<<endl;
    cout<<"R2 = "<<r2<<endl;}

    return 0;
}
