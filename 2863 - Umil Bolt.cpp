#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    while(cin>>n){

        vector<float> v(n);
        for(int i=0; i<n; i++){
            cin>>v[i];
        }
        sort(v.begin(), v.end());
        cout<<fixed<<setprecision(2)<<v[0]<<endl;
    }
    return 0;
}
