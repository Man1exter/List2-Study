#include <iostream>

using namespace std;

int main()
{

int x;
int y;

while( x < 11 )
{
y = 0;
    while( y < 10 )
    {
         cout<< x << " * " << y <<" =  "<< x * y <<endl;
         y++;
    }
 cout<< x << " * " << y <<" =  "<< x * y <<endl;
 x++;
}
    return 0;
}