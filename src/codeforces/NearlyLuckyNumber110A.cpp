#include <iostream>
 
using namespace std;
 
int main()
{
    string s;
    int c = 0;
    cin >> s;
 
 
    for (int i = 0; i < s.size(); i++){
        if (s.at(i) == '7' || s.at(i) == '4' ){
                c +=1;
        }
    }
 
    if (c == 7 || c == 4){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
 
    }
    return 0;
}