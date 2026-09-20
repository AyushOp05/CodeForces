#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
    int n;
    int blank=0,length=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
    if(a[i]==0){
        blank++;
    }
    else{
        blank=0;
    }
    length=max(length,blank);  
}
    cout<<length<<endl;
    }
}  