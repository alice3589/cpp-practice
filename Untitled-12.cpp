#include <iostream>
using namespace std;

int length(char* str);

int main()
{
    char moji[100];

    cout << "文字列を入力してください。\n"; 
    cin >> moji;

    int count = length(moji);

    cout << "文字列の長さは" << count << "です。\n";

    return 0;
}

int length(char* str)
{
    int i = 0;
    while (str[i]){
        i++;
    }
    return i;
}