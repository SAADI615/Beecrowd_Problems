#include<bits/stdc++.h>
using namespace std;
int main(){
    int test,n;
    cin>>test;

    while(test>0){
        cin>>n;
        if(n==0){
            cout<<"NULL"<<endl;
        }
        else{
            if(n%2==0) cout<<"EVEN ";
            else cout<<"ODD ";
        
            if(n>0) cout<<"POSITIVE"<<endl;
            else cout<<"NEGATIVE"<<endl;
        }
        test--;
    }
    return 0;    
}
