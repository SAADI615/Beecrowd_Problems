#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,x,y,z;
    cin>>n;
    for(int i=1; i<=n; i++){
        x=i;
        y=x*x;
        z=y*x;
        cout<<x<<" "<<y<<" "<<z<<endl;
        cout<<x<<" "<<y+1<<" "<<z+1<<endl;
    }
    return 0;
}