#include <iostream>

using namespace std;

int main()
{

int x,y;


for(x = 0; x < 10; x++){

y = 3 * x;

cout << "for wyniki do 10 to: "<< y << endl;

}

do
{
    
x = 0;
y = 3 * x;
x++;

cout<< "do ... while wyniki do 10 to: "<< y <<endl;

}
while (x > 10);


    return 0;
}





