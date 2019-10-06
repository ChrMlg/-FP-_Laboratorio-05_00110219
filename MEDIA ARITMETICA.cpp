#include <iostream>

using namespace std;

int main()
{
    cout << "digite cantidad de numeros" << endl;
    int n;
    cin >> n;
    float a=0;
    float tot=0;
    for (int i = 1 ; i <= n ; i++){

        cout << "digite numero " <<i<< endl;
        cin >> a;
        tot=tot+a;
        }
        cout << "su total es: " << tot << endl;
        float med = tot/n;
        cout << "la media aritmetica es: " << med << endl;

    return 0;
}
