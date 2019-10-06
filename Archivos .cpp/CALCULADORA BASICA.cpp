#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;

int Fact(int n){        //FUNCION DE FACTORIAL
    int f=1;
    if (n==0) {
        return f;
    }

    else if (n < 0) {
    int np = n*(-1);

    for (int i=1; i<=np; i++){
        f=f*i;
    } return f;
}   else {
    for (int i=1; i<=n; i++){
        f=f*i;
    }
    return f;
}}

float SUM (float a, float b) {      //FUNCION DE SUMA
        float c = a+b;
        return c;
}

float RES (int a, int b) {      //FUNCION DE RESTA
float c=a-b;
return c;}

float MUL (int a, int b) {      //FUNCION DE MULTIPILICACION
float c = a*b;
return c;}

float DIV (int a, int b) {      //FUNCION DE DIVISION
float c = a/b;
return c;}

float RAD (float a) {       //FUNCION DE RAIZ CUADRADA
float b = sqrt(a);
return b;}

float POW (float a, float b){       //FUNCION DE POTENCIA
float c = pow (a,b);
return c;}



int main(){                         //FUNCION PRINCIPAL (CUERPO)

    cout << "**CALCULADORA BASICA**"<<endl;                 //MENU DE OPCIONES
    cout << "1. Funcion de fibonacci"<<endl;
    cout << "2. Factorial de un numero" << endl;
    cout << "3. Suma de dos numeros" << endl;
    cout << "4. Resta de dos numeros" << endl;
    cout << "5. Multiplicacion de dos numeros" << endl;
    cout << "6. Division de dos numeros " << endl;
    cout << "7. Radical de un numero " << endl;
    cout << "8. Potencia de un numero" << endl;
    cout << "" << endl;

    char ans;
    cin >> ans;

    switch (ans)
    {
    case '1':
{


        cout << "funcion de fibonacci" << endl;         //LA FUNCION DE FIBONACCI ESTÁ EN EL CUERPO PRINCIPAL PORQUE TIENE QUE MOSTRAR TODOS LOS VALORES POR LOS QUE PASA
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

        }

break;
    case '2':
        {

        cout << "Factorial: Digite un numero: " << endl;
        cout << "" << endl;
        int x;
        cin >> x;

        int fact= Fact(x);

        cout << "factorial de " << x << " es " << fact << endl;

}
break;
    case '3':
        {
            float x,y;
            cout << "Suma de dos numeros: "<<endl;
            cout << "Digite primer numero: "<< endl;
            cin >> x;
            cout << "Digite segundo numero: "<< endl;
            cin >> y;
            cout << "" << endl;

            float sum = SUM (x,y);

            cout << "La suma de los numeros es: " << sum << endl;
}
break;
    case '4':
        { cout << "Resta de dos numeros: " << endl;
            float x,y;
            cout << "Digite minuendo: " << endl;
            cin >>x;
            cout << "Digite sustraendo: " << endl;
            cin >> y;
            cout << "" << endl;
            float res = RES (x,y);
            cout << "La resta de los numeros es: "<< res << endl;

        }
break;
    case '5':
        {
            cout << "Multiplicacion de dos numeros" << endl;
            float x,y;
            cout << "Digite primer numero: " << endl;
            cin >> x;
            cout << "Digite segundo numero: " << endl;
            cin >> y;
            cout << "" << endl;
            float mul = MUL (x,y);
            cout << "El producto es: " << mul << endl;
        }
break;
    case '6':
        {
            cout << "Division de dos numeros: " << endl;
            float num, den;
            cout << "Digite dividendo" << endl;
            cin >> num;
            cout << "Digite divisor" << endl;
            cin >> den;
            cout << "" << endl;
            float coc = DIV (num,den);
            cout << "El cociente es: " << coc << endl;
        }
break;
    case '7':
        {
            cout << "Radical de un numero, digite numero:" << endl;
            float c;
            cin >> c;
            float rad = RAD(c);
            cout << "" << endl;
            cout << "La Raiz de "<< c << " es: " << rad << endl;


        }
break;
    case '8':
        {
            cout << "Potencia de un numero: " << endl;
            float ba,ex;
            cout << "Digite la base: " << endl;
            cin >> ba;
            cout << "Digite el exponente: " << endl;
            cin >> ex;
            float pot= POW(ba,ex);
            cout << "" << endl;
            cout << "El resultado es: " << pot << endl;
        }

system("pause");
    return 0;
}}







