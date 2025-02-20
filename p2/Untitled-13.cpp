#include  <iostream>
using namespace std;

int count(char str[], char ch);

int main()
{
    char moji[100];
    char sagasu;

    cout << "文字列を入力してください。\n";
    cin >> moji;

    cout << "文字列から探す文字を入力してください。\n";
    cin >> sagasu;

    int kazu = count(moji, sagasu);

    cout << moji << "の中に" << sagasu << "は全部で" <<  kazu << "個あります。\n"; 

    return 0;
}

int count(char str[], char ch)
{
    int i = 0;
    int c = 0;
    while (str[i]){
        if (str[i] == ch){
            c++;
        }
        i++;
    }
    return c;
}