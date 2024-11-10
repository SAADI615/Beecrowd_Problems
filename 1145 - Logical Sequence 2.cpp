#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,y,count=1;
    cin>>x>>y;
    for(int i=1; i<=y; i++){
        if(count==x){
            cout<<i<<endl;
            count=1;
        }
        else{
            cout<<i<<" ";
            count++;
        }

    }
    return 0;
}
