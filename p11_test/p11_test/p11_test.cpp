#include <iostream>
using namespace std;

struct Person {
    int age;
    double weight;
    double height;
};

void aging(Person* p);

int main()
{
    Person per1 = { 0, 0.0, 0.0 };

    cout << "年齢を入力してください。\n";
    cin >> per1.age;

    cout << "体重を入力してください。\n";
    cin >> per1.weight;

    cout << "身長を入力してください。\n";
    cin >> per1.height;

    aging(&per1);

    return 0;
}

void aging(Person* p)
{
    cout << "年齢" << p->age << "体重" << p->weight << "身長" << p->height << "です。\n";
    cout << "1年経過しました。\n";
    cout << "年齢" << p->age + 1 << "体重" << p->weight << "身長" << p->height << "です。\n";
}