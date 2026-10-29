#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int dot_c=0;
        int found=0;
        for(int i=0;i<n;i++){
            if(s[i]=='.'){
                dot_c++;
            }
            if( i+2<n && s[i]=='.' && s[i+1]=='.' && s[i+2]=='.'){
                cout<<2<<endl;
                found=1;
                break;
            }
        }
        if(found==0){
            cout<<dot_c<<endl;
        }  
    }          
}       
        
  