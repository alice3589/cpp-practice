#include <iostream>
using namespace std;

int main()
{
    const int sub = 2;
    const int num = 5;
    int test[sub][num];

    test[0][0] = 80;
    test[0][1] = 60;
    test[0][2] = 22;
    test[0][3] = 50;
    test[0][4] = 75;
    test[1][0] = 90;
    test[1][1] = 55;
    test[1][2] = 68;
    test[1][3] = 72;
    test[1][4] = 58;

    for(int i = 0; i < num; i++){
        cout << i + 1 << "番目の人の国語の点数は" << test[0][i] << "点です。\n";
        cout << i + 1 << "番目の人の数学の点数は" << test[1][i] << "点です。\n";
    }

    return 0;
}