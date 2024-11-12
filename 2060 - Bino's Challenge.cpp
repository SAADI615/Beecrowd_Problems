#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int count_5=0, count_2=0, count_3=0, count_4=0;
    cin>>n;
    int v [n];
    for(int i=0; i<n; i++){
        cin>>v[i];
        if(v[i]%2==0){
            count_2++;
        }
        if(v[i]%3==0){
            count_3++;
        }
        if(v[i]%4==0){
            count_4++;
        }
        if(v[i]%5==0){
            count_5++;
        }
    }
    cout<<count_2<<" Multiplo(s) de 2"<<endl;
    cout<<count_3<<" Multiplo(s) de 3"<<endl;
    cout<<count_4<<" Multiplo(s) de 4"<<endl;
    cout<<count_5<<" Multiplo(s) de 5"<<endl;
    return 0;
}
