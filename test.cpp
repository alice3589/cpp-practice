#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    int D[49];

    for (int i = 0; i < N - 1; i++) {
        cin >> D[i];
    }

    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            int dist = 0;
            for (int k = i; k < j; k++) {
                dist += D[k];
            }
            cout << dist << endl;
        }
    }

    return 0;
}