#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    while(1){
        cin>>x;
        if(x==0) break;
        else{
            for(int i=1; i<=x; i++){
                if(i!=x){
                cout<<i<<" ";
                }
                else{
                    cout<<i;
                }
            }
            cout<<""<<endl;
        }
    }
}