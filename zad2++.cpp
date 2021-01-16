#include <iostream>

using namespace std;

int main()
{

int x = 0;
int y = 0;

while( x < 10 )
{
y = 1;
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