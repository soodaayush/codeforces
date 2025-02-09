#include <bits/stdc++.h>

using namespace std;

int minLength(const string& s) {
    if (s.empty()) return 0;

    for (int i = 1; i < s.length(); ++i) {
        if (s[i] == s[i - 1]) {
            return 1;
        }
    }

    return s.length();
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    vector<string> testCases(t);

    for (int i = 0; i < t; i++) {
        cin >> testCases[i];
    }

    for (const auto& s : testCases) {
        cout << minLength(s) << endl;
    }

    return 0;
}