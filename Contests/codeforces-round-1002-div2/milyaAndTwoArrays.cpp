#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> a(n), b(n);
    for (int &x: a) cin >> x;
    for (int &x: b) cin >> x;

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    set<int> cValues;

    for (int i = 0; i < n; i++) {
        cValues.insert(a[i] + b[i]);
    }

    if (cValues.size() >= 3) {
        cout << "YES\n";
        return;
    }

    cValues.clear();
    rotate(a.begin(), a.begin() + 1, a.end());

    for (int i = 0; i < n; i++) {
        cValues.insert(a[i] + b[i]);
    }

    cout << (cValues.size() >= 3 ? "YES" : "NO") << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    while (n--) {
        solve();
    }
}