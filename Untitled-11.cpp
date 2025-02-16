#include <iostream>
using namespace std;

int max(int x[]);

int main()
{
    int test[5];

    cout << "テストの点数を入力してください\n";
    
    for (int i = 0; i < 5; i++) {
        cin >> test[i];
    }

    int max1 = max(test);
    cout << "最高点は" << max1 << "点です\n";

    return 0;
}

int max(int x[])
{
    int sum = x[0];
    for (int i = 1; i < 5; i++) {
        if (sum < x[i]) {
            sum = x[i];
        }
    }

    return sum;
}

// こんばんわ