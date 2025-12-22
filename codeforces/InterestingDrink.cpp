#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    long long n;
    cin >> n;

    vector<long long> arr(n);
    for(long long i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    long long m;
    cin >> m;

    while(m--) {
        long long x;
        cin >> x;
        // number of drinks <= x
        long long count = upper_bound(arr.begin(), arr.end(), x) - arr.begin();
        cout << count << endl;
    }

    return 0;
}
