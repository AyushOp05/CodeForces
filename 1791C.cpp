#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while(t--) {
        int n;
        cin >> n;
        
        string s;
        cin >> s;
        int len=n;
        
        for(int i = 0;i<n/2; i++){
            if(s[i] != s[n-i-1]) {
                len -= 2;
            } else {
                break;  
            }
        }
        
        cout << len << endl;
    }
}