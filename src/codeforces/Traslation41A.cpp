#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string s, t;
    int r;

    cin >> s;
    cin >> t;

    reverse (s.begin(), s.end());
    if (s.compare(t) == 0) {
        cout << "YES" << endl;
    } else{
        cout << "NO" << endl;
    }
    return 0;
}