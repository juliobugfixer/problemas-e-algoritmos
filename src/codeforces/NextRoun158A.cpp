#include <iostream>

using namespace std;

int main()
{
    int n, k, l, v = 0;

    cin >> n >> k;
    int p[n];


    for (int i = 0; i < n; i++){
        cin >> p[i];
    }
    l = p[k-1];

    for (int j = 0; j < n ; j++){
        if (p[j] >= l && p[j] !=0){

                   v += 1;
        }
    }

    cout << v<< endl;
    return 0;
}