#include<iostream>
#include <cctype>
#include<string>
#include<array>

using namespace std;

int main()
{
    int  n, d = 0, a = 0;
    string s;
    cin >> n;

    char c[n];

    for (int i = 0; i < n; i++){
        cin >> c[i];
    }
    s.assign(c, c + n);

    for (int i = 0; i < n; i++){
        if (s.at(i) == 'D'){
            d += 1;
        }
        if(s.at(i) == 'A'){
            a += 1;
    }
}
    if (a > d){
        cout << "Anton" << endl;
    } else {
        if (a < d){
        cout << "Danik" << endl;
    } else {
    if (a == d){
        cout << "Friendship" << endl;
    }
    }
}
    return 0;
}
