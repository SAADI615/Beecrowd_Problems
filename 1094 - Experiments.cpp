#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,total_c=0,total_r=0,total_s=0;
    cin>>t;
    int num[t];
    char name[t];
    for(int i=0; i<t; i++){
        cin>>num[i]>>name[i];
        if(name[i]=='C') total_c+=num[i];
        if(name[i]=='R') total_r+=num[i];
        if(name[i]=='S') total_s+=num[i];
    }
    int total=total_c+total_r+total_s;
    cout<<"Total: "<<total<<" cobaias"<<endl;
    cout<<"Total de coelhos: "<<total_c<<endl;
    cout<<"Total de ratos: "<<total_r<<endl;
    cout<<"Total de sapos: "<<total_s<<endl;
    double per_c= double (100*total_c)/total;
    double per_r=double (100*total_r)/total;
    double per_s=double (100*total_s)/total;
    cout<<"Percentual de coelhos: "<<setprecision(2)<<fixed<<per_c<<" %"<<endl;
    cout<<"Percentual de ratos: "<<setprecision(2)<<fixed<<per_r<<" %"<<endl;
    cout<<"Percentual de sapos: "<<setprecision(2)<<fixed<<per_s<<" %"<<endl;
    return 0;
}
