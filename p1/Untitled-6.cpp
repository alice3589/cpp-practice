#include <iostream>
using namespace std;

template <class T>
T squarex(T x)
{
    return x*x;
}

int main()
{
    int sum1, ans1;
    double sum2, ans2;

    cout << "整数を入力してください\n";
    cin >> sum1;

    cout << "小数を入力してください\n";
    cin >> sum2;

    ans1 = squarex(sum1);
    ans2 = squarex(sum2);

    cout << sum1 << "の2乗は" << ans1 << "です\n";
    cout << sum2 << "の2乗は" << ans2 << "です\n";

    return 0;
}