#include <iostream>

using namespace std;

int main()
{
    int y = 0;
    int x;


   // do loop execution
   do 
   {
      y = 3 * x;
      x++;
      
      cout << "wartość y: " << y << endl;
   } 
   while( x < 10 );
 
   return 0;

}