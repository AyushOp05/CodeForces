#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n, x; // n is gas station , x is destination
        cin >> n >> x;
        int a[n+1];
        a[0] = 0;
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }
        int diff_fuel=0;
        for (int i = 1; i <= n; i++) {
            diff_fuel = max(diff_fuel, a[i] - a[i - 1]);
        }
        int mx =a[n];
        int final = max(diff_fuel, 2 * (x - mx));
        cout << final << endl;
    }
}
