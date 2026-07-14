#include <bits/stdc++.h>
using namespace std;

int countSegments(const string &sub, char start) {
    int n = sub.size();
    int segments = 0;

    for (int i = 0; i < n; i++) {
        char expected = (i % 2 == 0) ? start : (start == '0' ? '1' : '0');

        if (sub[i] != expected) {
            segments++;

            while (i + 1 < n) {
                char nxt = ((i + 1) % 2 == 0) ? start : (start == '0' ? '1' : '0');
                if (sub[i + 1] == nxt) break;
                i++;
            }
        }
    }

    return segments;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int n, q;
        cin >> n >> q;

        string s;
        cin >> s;

        while (q--) {
            int l, r, k;
            cin >> l >> r >> k;

            string sub = s.substr(l - 1, r - l + 1);

            int ans = min(countSegments(sub, '0'),
                          countSegments(sub, '1'));

            if (ans <= k)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }

    return 0;
}///see this is just a good intution for segment testing
