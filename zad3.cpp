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
    int EPS; // wynik koncowy..
    
    cout << "Podaj wartość pierwiastka kwadratowego z metody iteracyjnej Newtona" << endl;
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

     cout << "wynik koncowy z if else do sprawdzenia: " << p << endl;

     while(fabs(p = 0 - p) >= EPS)
     {
         
       i++;
       
       p = (x + p*p) / (2 * p);


     }
   
   cout << " wynik EPS: " << EPS << endl;




    return 0;
}