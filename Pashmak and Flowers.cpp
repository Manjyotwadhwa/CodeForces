#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<long long> b(n);
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }

    long long mn = *min_element(b.begin(), b.end());
    long long mx = *max_element(b.begin(), b.end());

    if (mn == mx) {
        // all elements same
        long long ways = (long long)n * (n - 1) / 2;
        cout << 0 << " " << ways ;
    } else {
        long long count_min = 0, count_max = 0;

        for (auto x : b) {
            if (x == mn) count_min++;
            if (x == mx) count_max++;
        }

        cout << mx - mn << " " << count_min * count_max ;
    }

    return 0;
}