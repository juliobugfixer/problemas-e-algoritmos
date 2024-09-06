#include <iostream>

using namespace std;

int main()
{
    int n, hc, h, b = 0, nb = 0, s = 0;

    cin >> n >> hc;

    for (int i = 0; i < n; i ++){
        cin >> h;
        if (h > hc){
                b +=2;
        } else{
            if (h <= hc){
                nb += 1;
            }
        }
    }

    s = b + nb;
    cout << s << endl;
    return 0;
}
