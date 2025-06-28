#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;

    set<char> allowed(t.begin(), t.end());

    bool a = true;

    for (int i = 1; i < s.length(); i++) {
        if (isupper(s[i])) {
            if (allowed.find(s[i - 1]) == allowed.end()) {
                a = false;
                break;
            }
        }
    }

    if (a == true) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}