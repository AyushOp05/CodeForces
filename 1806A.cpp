#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
    int xgap,ygap;
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if(b>d){
        cout<<-1<<endl;
    }
    else{
        ygap=abs(d-b);
            a+=ygap;
            b+=ygap;
        if(a<c){
            cout<<-1<<endl;
            continue;
        }
        else{
            xgap=abs(c-a);
        }
        cout<<xgap+ygap<<endl;
        }
    }
}
  