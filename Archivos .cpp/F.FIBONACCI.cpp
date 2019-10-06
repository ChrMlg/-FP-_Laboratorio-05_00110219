#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){

    cout<<"programa de funcion de fibonacci:"<<endl;
    cout<<"digite numero de elementos:"<<endl;
    cout<<""<<endl;
    int a=0;
    int b=1;
    int c;
    int n=0;

    cin >> n;
    cout << "0, ";
    for (int i=0;i<n;i++){


        c=a+b;

        a=b;

        b=c;

        cout <<b<<", ";
    }
    system("pause");
return 0;
}
