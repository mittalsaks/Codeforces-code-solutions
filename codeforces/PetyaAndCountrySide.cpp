#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> h(n);
    for (int i = 0; i < n; i++) {
        cin >> h[i];
    }

    int ans = 1;

    for (int i = 0; i < n; i++) {
        int cnt = 1;

        // go left
        int j = i;
        while (j - 1 >= 0 && h[j - 1] <= h[j]) {
            cnt++;
            j--;
        }

        // go right
        j = i;
        while (j + 1 < n && h[j + 1] <= h[j]) {
            cnt++;
            j++;
        }

        ans = max(ans, cnt);
    }

    cout << ans << endl;
    return 0;
}
