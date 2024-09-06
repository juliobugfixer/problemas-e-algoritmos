#include<iostream>
#include<cctype>
#include<cstring>

using namespace std;

int main()
{
    string s;
    cin >> s;

    if (islower(s[0])){

    s[0] = (char) toupper( (int) s[0] );

    cout << s << endl;

    } else {
    if (isupper(s[0])){
            cout << s << endl;
    }
}
    return 0;
}
