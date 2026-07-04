#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<long long> a(n), b(n);

        for (int i = 0; i < n; i++)
            cin >> a[i];

        for (int i = 0; i < n; i++)
            cin >> b[i];

        vector<int> used(n, 0);
        long long ans = 0;
        bool ok = true;

        for (int i = 0; i < n; i++) {

            int pos = -1;

            // leftmost unused element that can become b[i]
            for (int j = 0; j < n; j++) {
                if (!used[j] && a[j] <= b[i]) {
                    pos = j;
                    break;
                }
            }

            if (pos == -1) {
                ok = false;
                break;
            }

            // count unused elements before pos
            for (int j = 0; j < pos; j++) {
                if (!used[j])
                    ans++;
            }

            used[pos] = 1;
        }

        if (!ok)
            cout << -1 << "\n";
        else
            cout << ans << "\n";
    }
}
