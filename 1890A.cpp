#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    map<long long,long long>fre_map;
    for(int i=0;i<n;i++){
        fre_map[a[i]]++;
    }
    if(fre_map.size()>=3){
        cout<<"No"<<endl;
    }
    else{
    long long freq1=fre_map.begin()->second;
    long long freq2=fre_map.rbegin()->second;
    if(freq1==freq2){
        cout<<"Yes"<<endl;
    }else if(n%2==1 &&(abs(freq1-freq2)==1)){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
    }
   }
}  