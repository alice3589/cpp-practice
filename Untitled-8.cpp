#include <iostream>
using namespace std;

void add(int& x1, int& x2, int a);

int main()
{
    int num1, num2, ad;

    cout << "2科目分の点数を入力してください\n";
    cin >> num1 >> num2;

    cout << "加算する点数を入力してください\n";
    cin >> ad;

    cout << ad << "点加算しましたので\n";

    add(num1, num2, ad);

    cout << "科目1の点数は" << num1 << "です\n";
    cout << "科目2の点数は" << num2 << "です\n";
}

void add(int& x1, int& x2, int a)
{
    x1 += a;
    x2 += a;
}