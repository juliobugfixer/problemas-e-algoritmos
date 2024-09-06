#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s, f = "X++", c = "X--";
    int n, x = 0;

    cin >> n;

    for (int i = 1; i <= n; i++) {
        cin >> s;

        if (s.compare(f) == 0 || s == "++X"){
                x++;
        } else{
            if (s.compare(c) == 0 || s == "--X"){
                x--;
            }
        }
    }

    cout << x << endl;

    return 0;
}
