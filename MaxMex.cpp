#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {

        int n;
        cin >> n;

        vector<int> a(n);

        for (int i = 0; i < n; i++)
            cin >> a[i];

        sort(a.begin(), a.end());

        vector<int> b;
        vector<bool> used(n, false);

        // Step 1 : largest first
        b.push_back(a[n - 1]);
        used[n - 1] = true;

        // Step 2 : unique values in increasing order
        int last = -1;
        for (int i = 0; i < n - 1; i++) {
            if (a[i] != last) {
                b.push_back(a[i]);
                last = a[i];
                used[i] = true;
            }
        }

        // Step 3 : duplicates
        for (int i = 0; i < n; i++) {
            if (!used[i])
                b.push_back(a[i]);
        }

        long long ans = 0;
        int mx = -1;
        int mex = 0;

        unordered_set<int> st;

        for (int x : b) {

            st.insert(x);
            mx = max(mx, x);

            while (st.count(mex))
                mex++;

            ans += mx + mex;
        }

        cout << ans << "\n";
    }

    return 0;
}
//just remember one thing that pick the largest element at first so as to maximize the sum of max and also the point which should be noted is put the duplicates at back which makes the maximum of the mex of elements in the array
