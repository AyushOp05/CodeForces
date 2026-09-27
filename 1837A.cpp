#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
    int x,k;
    cin>>x>>k;
    if(x%k!=0){
        cout<<1<<endl<<x<<endl;
    }
    else{
        cout<<2<<endl<<1<<" "<<(x-1)<<endl;
    }
    }
}  