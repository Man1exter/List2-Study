#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>

using namespace std;

int main()
{
    int x; // argument pierwiastka..
    int p; // kolejne przybliżenie..
    int pn; //kolejne przyblizenie..
    int n; // wartość p dokladniejsza n..
    int EPS = 0.0000001; // wynik koncowy..
    
    cout << "Podaj wartość pierwiastka kwadratowego z metody iteracyjnej Newtona: " << endl;
    cin >> x;

     cout << "Podaj wartość n: " << endl;
     cin >> n;

    pn = (p * p * n - 1  + x) / (2 * p * n - 1);

     cout << "wynik p: " << p << endl;
     cout << "wynik n: " << n << endl;


     if(x > 1.0){
       p = x/2.0;
     } else {
         p = x * 2.0;
     }
     p = p + 2 * EPS;
     cout << "wynik koncowy z if else do sprawdzenia: " << p << endl;
     while(p = 0 - p >= EPS)
     {
       p = ( x + p*p ) / ( 2 * p );
     }
    p = M_E;
   cout << " wynik koncowy: " << sqrt(p) << endl;
    return 0;
}
//-------przykład: --------

// 1 wartosc = 5
// 2 wartosc = 5
// wynik p = 0;
// wynik n = 5;
// wynik z if else = 2;
// wynik koncowy = 1.41421