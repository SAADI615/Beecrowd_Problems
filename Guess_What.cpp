#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,ans;
        cin>>n>>ans;
        int arr[n];
        int position=0;
        int z;
        for(int i=0; i<n; i++){
            cin>>z;
            arr[i]=abs(z-ans);
        }
        int min=arr[0];
        for(int i=1; i<n; i++){
            if(min>arr[i]){
                min=arr[i];
            }
        }
        for(int i=0; i<n; i++){
            if(arr[i]==min){
                position = i;
                break;
            }
        }
        cout<<position+1<<endl;

    }
    return 0;
}