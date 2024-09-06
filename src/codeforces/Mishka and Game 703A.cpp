#include <iostream>

using namespace std;

int main()
{
    int n, m, c, s_m = 0, s_c =0 ;

    cin >> n;

    for (int i = 0; i < n; i++){
        cin >> m >> c;

        if (m > c){
            s_m +=1;
        } else if (m < c) {
            s_c +=  1;
        }
    }

    if (s_m == s_c){
            cout << "Friendship is magic!^^" << endl;
            return 0;
    }

    if (s_m > s_c){

            cout << "Mishka" << endl;

    } else if (s_m < s_c) {

        cout << "Chris" << endl;
    }

    return 0;
}
