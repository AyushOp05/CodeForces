#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        long long n, k;
        cin >> n >> k;

        long long ans = 0;
        long long cost = 1;

        while (cost <= n) {
            long long canBuy = min(k, n / cost);

            ans += canBuy;
            n -= canBuy * cost;

            if (canBuy < k)
                break;

            cost <<= 1;
        }

        cout << ans << '\n';
    }

    return 0;
}