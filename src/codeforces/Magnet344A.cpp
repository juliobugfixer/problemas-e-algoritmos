#include <iostream>


using namespace std;

int main()
{
    int n, c = 0, tamanho;

    cin >> n;

    int g[n];

    tamanho = sizeof(g)/ sizeof(int);


    for (int i = 0; i < tamanho; i++){
        cin >> g[i];
    }

    for (int i = 0; i < tamanho; i++){
        if (g[i] != g[i+1]){
            c +=1;
        }
    }


    cout << c << endl;
    return 0;
}