#include<iostream>

using namespace std;

int main()
{
    int a, b, y = 0, i = 1;

    cin >> a >> b;

    do{
        a *= 3;
        b *= 2;
        y += 1;

    } while (a <= b);
    cout << y << endl;
    return 0;
}