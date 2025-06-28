#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a, b;
    int c = 0;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        if (a < b) {
            c++;
        }
    }

    cout << c << endl;

    return 0;
}