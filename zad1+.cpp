#include <iostream>

using namespace std;

int main()
{
    int y;
    int x;

   do 
   {
      y = 3 * x;
      x++;
      
      cout << "wartość y: " << y << endl;
   } 
   while( x < 10 );
 
   return 0;

}