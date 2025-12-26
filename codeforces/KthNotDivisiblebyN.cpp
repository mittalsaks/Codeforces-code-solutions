#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        long long n, k;
        cin >> n >> k;

        long long low = 1, high = 1e18;
        long long ans = 0;

        while (low <= high) {
            long long mid = low + (high - low) / 2;

            // count of numbers NOT divisible by n till mid
            long long notDiv = mid - (mid / n);

            if (notDiv >= k) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        cout << ans << "\n";
    }

    return 0;
}
