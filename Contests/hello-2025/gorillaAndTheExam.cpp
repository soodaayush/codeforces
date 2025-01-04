#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int testCaseCount;

    cin >> testCaseCount;

    while (testCaseCount--) {
        int n;
        int k;
        cin >> n >> k;
        vector<int> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        unordered_map<int, int> frequencyMap;
        for (int i = 0; i < n; i++) {
            frequencyMap[a[i]]++;
        }

        int minOperations = n;

        for (const auto& entry : frequencyMap) {
            int value = entry.first;

            int left = 0, right = 0, changes = 0;
            while (right < n) {
                if (a[right] != value) {
                    changes++;
                }
                while (changes > k) {
                    if (a[left] != value) {
                        changes--;
                    }

                    left++;
                }

                minOperations = min(minOperations, n - (right - left + 1));
                right++;
            }
        }

        cout << minOperations << endl;
    }
}