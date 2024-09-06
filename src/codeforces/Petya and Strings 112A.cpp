#include<iostream>
#include<array>
#include<string>
#include<cstring>



using namespace std;

int main()
{ string s, st;

    cin >> s;
    cin >> st;

   // int t = s.size();


            if (strcasecmp(s.c_str(), st.c_str()) == 0){
            cout << 0;
            } else {
                if (strcasecmp(s.c_str(), st.c_str()) < 0){
                    cout << -1;
                } else {
                    if (strcasecmp(s.c_str(), st.c_str()) > 0){
                        cout << 1;
                    }
                }
            }

    return 0;
}
