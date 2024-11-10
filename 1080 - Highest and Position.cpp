#include<bits/stdc++.h>
using namespace std;
int main(){
    int i=1,pos,x;
    int max=0;
    for(i; i<=100; i++){
        cin>>x;
        if(x>max){
            max=x;
            pos=i;
        }
    }
    cout<<max<<endl;
    cout<<pos<<endl;

    return 0;
}
