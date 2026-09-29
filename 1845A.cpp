#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
    int n,k,x;
    cin>>n>>k>>x;
    if(x!=1){
        cout<<"YES"<<endl;
        cout<<n<<endl;
        for(int i=0;i<n;i++){
            cout<<1<<" ";
        }
        cout<<endl;  
}
else
        {
            // If x is 1, check if k is 1 or if k is 2 and n is odd
            if (k == 1 || (k == 2 && n % 2 == 1))
                cout << "NO" << endl; // Output NO since it's not possible to form n
            else
            {
                cout << "YES" << endl; // Output YES since it's possible to form n
                if (n % 2 == 0)
                {
                    cout << n / 2 << endl; // Output the number of integers used
                    for (int i = 1; i <= n / 2; i++) // Output n/2 number of 2s
                        cout << 2 << " ";
                    cout << endl;
                }
                else
                {
                    cout << (n - 3) / 2 + 1 << endl; // Output the number of integers used
                    for (int i = 1; i <= (n - 3) / 2; i++) // Output (n-3)/2 number of 2s
                        cout << 2 << " ";
                    cout << 3 << endl; // Output a 3 to make the sum n
                }
            }
        }
    }
    return 0;
} 









    