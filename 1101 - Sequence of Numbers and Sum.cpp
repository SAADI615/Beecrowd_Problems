#include<iostream>
using namespace std;

int main()
{
    int m,n,sum=0,i;
    while(1){
        sum=0;
        cin >> m >> n;
        if(m<=0 || n<=0) break;
        else if(m<n){
            for(i=m; i<=n; i++){
                cout << i << " ";
                sum=sum+i;
            }
            cout << "Sum=" << sum << endl;
        }
        else if(m>n){
            for(i=n; i<=m; i++){
                cout << i << " ";
                sum=sum+i;
            }
            cout << "Sum=" << sum << endl;
        }
    }
    return 0;
}
