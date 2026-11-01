#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> a(n);
        for(int i=0; i<n;i++){
            cin>>a[i];
        }
        vector<int> copy_a=a;
    
    sort(copy_a.begin(),copy_a.end());
    if(copy_a==a || k>1){
        cout<<"YES"<<endl;
    }
    else
        cout<<"NO"<<endl;
}
}