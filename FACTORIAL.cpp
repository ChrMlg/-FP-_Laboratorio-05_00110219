#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
    int n,f=1;
    cout << "digite un numero: " ;
    cin >> n;

    if (n==0) {
        cout << "factorial de 0 es: " << f << endl;
    }

    else if (n < 0) {
    int np = n*(-1);

    for (int i=1; i<=np; i++){
        f=f*i;
    } cout << "el factorial del numero es: " << f << endl;
}   else {
    for (int i=1; i<=n; i++){
        f=f*i;
    } cout << "el factorial del numero es: " << f << endl;
}
return 0;
}









