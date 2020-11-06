#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>

using namespace std;

int main()
{
    int x; // argument pierwiastka
    int p; // kolejne przybliżenie 
    int p - 1; // poprzednie przybliżenie wyniku
    int n; // wartość p dokladniejsza n
    
    cout << "Podaj wartość pierwiastka kwadratowego z metody iteracyjnej Newtona" << endl;
    cin >> x;

     cout << "Podaj wartość n" << endl;
    cin >> n;

    p * n = p * p * n-1 + x / 2 * p * n - 1;

    cout << "wynik pn" << p << endl;






    return 0;
}