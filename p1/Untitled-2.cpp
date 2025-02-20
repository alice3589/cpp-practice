#include <iostream>
using namespace std;

int main()
{
    double num1, num2, num3, num4, num5;

    cout << "科目1の点数を入力してください\n";
    cin >> num1;

    cout << "科目2の点数を入力してください\n";
    cin >> num2;

    cout << "科目3の点数を入力してください\n";
    cin >> num3;

    cout << "科目4の点数を入力してください\n";
    cin >> num4;

    cout << "科目5の点数を入力してください\n";
    cin >> num5;

    cout << "5科目の合計点は" << num1 + num2 + num3 + num4 + num5 << "です\n";
    cout << "5科目の平均点は" << (num1 + num2 + num3 + num4 + num5) / 5 << "です\n";

    return 0;
}