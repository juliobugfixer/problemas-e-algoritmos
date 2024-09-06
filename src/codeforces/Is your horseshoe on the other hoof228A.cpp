#include <iostream>

using namespace std;

int main() {

    int f[4];
    int c = 0;

    for (int i = 0; i < 4; i++){
       cin >> f[i];
    }

    for (int j = 0; j < 4; j++){

            if (f[j] == f[j+1] || f[j] == f[j+2] || f[j] == f[j+3] || f[j] == f[j+4]){
                c++;
            }
        }

    cout << c << endl;

    return 0;
}
