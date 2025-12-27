#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        string xp, yp;
        cin >> xp >> yp;
        int n = xp.size();
        int ans = INT_MAX;

        // Try y[0] = 0 and y[0] = 1
        for (int first = 0; first <= 1; first++) {
            int flips = 0;
            vector<int> y(n), x(n);

            y[0] = first;
            if (y[0] != (yp[0] - '0')) flips++;

            x[0] = y[0];
            if (x[0] != (xp[0] - '0')) flips++;

            for (int i = 1; i < n; i++) {
                // choose y[i] freely, but we try to match y'
                y[i] = yp[i] - '0';

                // derive x[i]
                x[i] = y[i] ^ y[i - 1];

                if (x[i] != (xp[i] - '0')) flips++;
            }

            // Now verify parity consistency
            int pref = 0;
            bool ok = true;
            for (int i = 0; i < n; i++) {
                pref ^= x[i];
                if (pref != y[i]) {
                    ok = false;
                    break;
                }
            }

            if (ok)
                ans = min(ans, flips);
        }

        cout << ans << "\n";
    }
    return 0;
}
