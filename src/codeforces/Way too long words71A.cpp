#include <iostream>

using namespace std;

int main()
{
    int n;

    cin >> n;
    string s[n];

    for(int j = 0; j < n; j++){
        cin >> s[j];
    }

    for (int i = 0; i < n; i++){
        if (s[i].size() > 10){
            cout << s[i].front() << s[i].size()-2 << s[i].back() << endl;
        } else {
        cout << s[i] << endl;
        }
    }
    return 0;
}