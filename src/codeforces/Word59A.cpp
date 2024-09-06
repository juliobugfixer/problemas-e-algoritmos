#include <iostream>
#include <cctype>
#include <string>
//JUlio
using namespace std;

int main()
{
    int u = 0, l = 0;
    string s, m, n;
    cin >> s;

    for (int i = 0; i < s.size(); i++){
            if (isupper(s.at(i))){
                u +=1;
            } else{
            if (islower(s.at(i))) {
                l +=1;
            }
        }
    }

    for (int j = 0; j < s.size(); j++){
        if (u > l){
            m = toupper(s[j]);
            cout << m;
        } else{
            if (l > u || u == l){
            n = tolower(s[j]);
            cout << n ;
            }
    }

}
    return 0;
}