#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> p(n + 1);

    for (int i = 1; i <= n; i++) {
        cin >> p[i];
    }

    for (int start = 1; start <= n; start++) {
        vector<int> vis(n + 1, 0);

        int cur = start;

        while (!vis[cur]) {
            vis[cur] = 1;
            cur = p[cur];
        }

        cout << cur << " ";
    }

    return 0;
}