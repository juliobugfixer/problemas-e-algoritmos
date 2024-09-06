#include <iostream>

using namespace std;

int main()
{
    int n, p;
    cin >> n;

    int v[n];

    for (int i = 1; i < n+1; ++i){
        cin >> p;
        v[p-1] = i;
    }

    for (int j = 0; j < n; j++){
        cout << v[j] << " ";
    }

    return 0;
}
