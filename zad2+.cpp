#include <iostream>

using namespace std;

int main()
{

int x = 0;
int y = 0;


do
{
x++;
  do 
        {
y++;
        cout<< x <<" * "<< y <<"  =  "<< x * y <<endl;

         }
         while(y < 10);
            
}
while(x < 10);


    return 0;
}