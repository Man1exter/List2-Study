#include <iostream>

using namespace std;

int main()
{
int x = 0;
int y = 0;

for( x = 1; x <= 10; x++)
{
    for(y = 1; y <= 10; y++)
    {
cout<< x <<" * "<< y <<"  =  "<<x * y <<endl;
    }
}


    return 0;
}