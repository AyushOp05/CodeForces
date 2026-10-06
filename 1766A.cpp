#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    int ans=0;
    int place=1;
    while(n>=place){
        ans+=min(9,n/place);
        place*=10;
    }
    cout<<ans<<endl;
    }
}  