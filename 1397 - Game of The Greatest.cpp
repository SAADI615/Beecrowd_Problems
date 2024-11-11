#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,o,c,sum_o=0, sum_c=0, sum=0;
    
    while(1){
        cin>>t;
        if(t==0) break;
        sum_o=0, sum_c=0;
        for(int i=0; i<t; i++){
            cin>>o>>c;
            if(o>c) sum_o++;
            else if(c>o) sum_c++;
            else(c=o);
                
        }
        cout<<sum_o<<" "<<sum_c<<endl;
    }
    
    return 0;

}
