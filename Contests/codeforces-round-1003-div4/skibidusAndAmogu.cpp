#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    while (n--) {
        string word;
        cin >> word;

        word.erase(word.size() - 2);

        word.append("i");

        cout << word << endl;
    }
}
