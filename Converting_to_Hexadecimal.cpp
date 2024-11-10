#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,v,count=0,s,f;
    string l;
    cin>>v;
    while(v>=16){
        s=v%16;
        v=v/16;
        if(s>=0 && s<=9) l=l+to_string(s);
        else if(s==10) l=l+"A";
        else if(s==11) l=l+"B";
        else if(s==12) l=l+"C";
        else if(s==13) l=l+"D";
        else if(s==14) l=l+"E";
        else if(s==15) l=l+"F";
    }
    while (v<16)
    {
        if(v>=0 && v<=9) {l=l+to_string(v); break;}
        else if(v==10) {l=l+"A";break;}
        else if(v==11) {l=l+"B";break;}
        else if(v==12) {l=l+"C";break;}
        else if(v==13) {l=l+"D";break;}
        else if(v==14) {l=l+"E";break;}
        else if(v==15) {l=l+"F";break;}
    }
    for(int i=l.length()-1; i>=0; i--){
        cout<<l[i];
    }
    return 0;
}