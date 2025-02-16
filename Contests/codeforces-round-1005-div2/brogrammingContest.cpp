#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;

        if(s.find('1') == string::npos){
            cout << 0 << endl;
            continue;
        }

        int moves = 0;
        if (s[0] == '1') moves++;

        for (int i = 1; i < n; i++){
            if(s[i] != s[i - 1])
                moves++;
        }

        cout << moves << endl;
    }

    return 0;
}
