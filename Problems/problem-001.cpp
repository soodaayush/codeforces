// https://codeforces.com/problemset/problem/71/A

#include <bits/stdc++.h>

using namespace std;

int main() {
    int wordCount;
    cin >> wordCount;

    for (int i = 0; i < wordCount; i++) {
        string word;
        cin >> word;

        if (word.length() > 10) {
            char firstLetter = word[0];
            char lastLetter = word[word.length() - 1];
            int wordLength = word.length() - 2;
            cout << firstLetter << to_string(wordLength) << lastLetter << endl;

        } else {
            cout << word << endl;
        }
    }
}

