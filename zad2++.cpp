#include <iostream>

using namespace std;

int main()
{

int x = 0;
int y = 0;

while( x < 10 )
{

    while( y < 10 )
    {
         y++;
         cout<< x << " * " << y <<" =  "<< x * y <<endl;

    }
 x++;
 cout<< x << " * " << y <<" =  "<< x * y <<endl;
}




    return 0;
}