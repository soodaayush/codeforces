#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<long long> a(n), b(n);

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        for (int i = 0; i < n; ++i) {
            cin >> b[i];
        }


        for (int i = 0; i < 100000; i++) {
            int sumA = accumulate(a.begin(), a.end(), 0LL);
            int sumB = accumulate(b.begin(), b.end(), 0LL);

            if (a[i] < b[i]) {
                a[i]++;

                for (int j = 1; i < 100000; i++) {
                    a[i]--;
                }
            }
        }
    }
}