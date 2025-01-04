#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int testCaseCount;

    cin >> testCaseCount;
    vector<pair<int, int>> testCases(testCaseCount);
    vector<int> answers(testCaseCount);

    for (int i = 0; i < testCaseCount; i++) {
        int number1, number2;
        cin >> number1 >> number2;
        testCases[i] = {number1, number2};
    }

    for (auto & testCase : testCases) {
        int answer = max(testCase.first, testCase.second) + 1;
        cout << answer << endl;
    }
}