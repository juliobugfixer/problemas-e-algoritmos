#include <iostream>

using namespace std;

int main(){

    int n, k, l, c, d, p, nl, np;

    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int t1 = (k * l) / nl;
    int t2 = p / np;

    int t3 = c * d;

    int t = min(t1, min(t2, t3))/n;

    cout<< t <<endl;

       return 0;
}