#include <iostream>

using namespace std;

int main()
{

int x;
int y;

do
{
 cout<< x <<" * "<< y <<"  =  "<< x * y <<endl;
x++;
  do 
  {
    cout<< x <<" * "<< y <<"  =  "<< x * y <<endl;
    y++;
  }
    while(y < 11);
            y=0;
}
while(x < 10);
x=0;
    return 0;
}