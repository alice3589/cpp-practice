#include <iostream>
using namespace std;

void swap(int* Px, int* Py);

int main()
{
    int num1 = 5;
    int num2 = 10;

    cout << "変数num1の値は" << num1 << "です\n";
    cout << "変数num2の値は" << num2 << "です\n";
    cout << "変数num1とnum2の値を交換します\n";

    swap(&num1, &num2);

    cout << "変数num1の値は" << num1 << "です\n";
    cout << "変数num2の値は" << num2 << "です\n";

    return 0;
}

void swap(int* Px, int* Py)
{
    int tmp;
    
    tmp = *Px;
    *Px = *Py;
    *Py = tmp;
}