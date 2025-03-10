﻿#include <iostream>
using namespace std;

class Car {
private:
    int num;
    double gas;
public:
    int getNum() { return num; }
    double getGas() { return gas;  }
    void show();
    void setNumGas(int , double n);
};

void Car::show()
{
    cout << "車のナンバーは" << num << "です。\n";
    cout << "ガソリン量は" << gas << "です。\n";
}

void Car::setNumGas(int n, double g)
{
    if (g > 0 && g < 1000) {
        num = n;
        gas = g;
        cout << "ナンバーを" << num << "ガソリン量を" << gas << "にしました。\n";
    }
    else {
        cout << g << "は正しいガソリン量ではありません。\n";
        cout << "ガソリン量を変更できませんでした。\n";
    }
}

void buy(Car& pC);

int main()
{
    Car car1;

    car1.setNumGas(1234, 20.5);

    buy(car1);

    return 0;
}

void buy(Car& pC)
{
    int n = pC.getNum();
    double g = pC.getGas();
    cout << "ナンバー" << n << "ガソリン量" << g << "の車を購入しました。\n";
}