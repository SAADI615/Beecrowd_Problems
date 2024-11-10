#include<iostream>
using namespace std;

int main()
{
    int x,y,sum=0,i;
    cin>>x>>y;
    if(x==y){
        cout << 0 << endl;
    }
    else if(x>y){
        for(i=y+1; i<x; i++){
            if(i%2!=0) sum=sum+i;
        }
    }
    else{
        for(i=x+1; i<y; i++){
            if(i%2!=0) sum=sum+i;
        }
    }
    cout << sum << endl;
    return 0;
}
