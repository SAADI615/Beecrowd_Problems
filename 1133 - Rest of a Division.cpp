#include<iostream>
using namespace std;

int main()
{
    int m,n,i;
    cin >> m >> n;
    if(m<n){
        for(i=m+1; i<n ; i++){
            if(i%5==2 || i%5==3){
                cout << i << endl;
            }
        }
    }
    else{
        for(i=n+1; i<m ; i++){
            if(i%5==2 || i%5==3){
                cout << i << endl;
            }
        }
    }
    return 0;
}
