#include <iostream>
using namespace std;

class Point {
private:
    int x;
    int y;
public:
    int getX() { return x; }
    int getY() { return y; }
    void setX(int a);
    void setY(int b);
};

void Point::setX(int a)
{
    if (a >= 0 && a <= 10) {
        x = a;
    }
    else {
        x = 0;
    }
}

void Point::setY(int b)
{
    if (b >= 0 && b <= 10) {
        y = b;
    }
    else {
        y = 0;
    }
}

int main()
{
    Point point1;

    int x, y;

    cout << "X座標を入力してください。\n";
    cin >> x;

    cout << "Y座標を入力してください。\n";
    cin >> y;

    point1.setX(x);
    point1.setY(y);

    cout << "座標は(" << point1.getX() << ',' << point1.getY() << ")です。\n";
}