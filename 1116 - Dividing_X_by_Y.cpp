#include<bits/stdc++.h>
using namespace std;
int main(){
    double x,y;
    int n;
    cin>>n;
    while(n>0){
        n--;
        cin>>x>>y;
        double div = x/y;
        if(y==0) cout<<"divisao impossivel"<<endl;
        else cout<<setprecision(1)<<fixed<<div<<endl;
    }
    return 0;
}