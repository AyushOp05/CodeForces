#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        int cnt2 = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] == 2)
                cnt2++;
        }
        // If there are no 2's
        if (cnt2 == 0) {
            cout << 1 << endl;
        }
        // If total number of 2's is odd
        else if (cnt2 % 2 == 1) {
            cout << -1 << endl;
        }
        // If total number of 2's is even
        else {
            int need = cnt2 / 2;
            int cnt = 0;
            for (int i = 0; i < n; i++) {
                if (a[i] == 2)
                    cnt++;
                if (cnt == need) {
                    cout << i + 1 << endl; // 1-based index
                    break;
                }
            }
        }
    }
    return 0;
}