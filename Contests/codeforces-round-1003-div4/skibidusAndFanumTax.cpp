#include <bits/stdc++.h>

using namespace std;

bool canSort(int n, int m, vector<int>& a, vector<int>& b) {
    int b_val = b[0];

    for (int i = 0; i < n; ++i) {
        int option1 = a[i];
        int option2 = b_val - a[i];

        if (i == 0) {
            a[i] = min(option1, option2);
        } else {
            if (option1 >= a[i-1] && option2 >= a[i-1]) {
                a[i] = min(option1, option2);
            } else if (option1 >= a[i - 1]) {
                a[i] = option1;
            } else if (option2 >= a[i - 1]) {
                a[i] = option2;
            } else {
                return false;
            }
        }
    }

    for (int i = 1; i < n; ++i) {
        if (a[i] < a[i-1]) {
            return false;
        }
    }

    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        vector<int> b(m);
        for (int i = 0; i < m; ++i) {
            cin >> b[i];
        }
        if (canSort(n, m, a, b)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}