#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,z,count=0;
    cin>>x;
    int sum=0;
    while(1){
        cin>>z;
        if(z>x) break;
    }
    while(1){
        sum+=x+1;
        count++;
        if(sum>z) break;
    }
    cout<<count-1<<endl;
}
