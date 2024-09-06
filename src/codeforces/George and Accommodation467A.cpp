#include<iostream>


using namespace std;

int main()
{
  int n, q, p, c = 0;
  cin >> n;

  for (int i = 0; i < n; i++){
    cin >> p >> q;
    if (p < q && q-p >= 2){
            c +=1;
    }
  }

  if (c >= 2){
    cout << c << endl;
    return 0;
  }
  cout << c;

    return 0;
}
