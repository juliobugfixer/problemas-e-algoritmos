#include<iostream>

using namespace std;

int main()
{
    int n, r, c;

    cin >> n;

    for (int i = 0; i < n; i++){
    cin >> r;
    c = r;
        if (c == 1){
            cout << "HARD";
            return 0;
        }
    }
    cout << "EASY";

    return 0;
}
