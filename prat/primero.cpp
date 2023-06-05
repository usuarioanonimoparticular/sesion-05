#include <iostream>

using namespace std;

int main ()
{ 
int a, b;

cout <<"primer nuemro: "<< endl;
cin << a;
cout <<"segundo numero: " << endl;
cin << b;

if (a > b)
{
    return a;
}
else
{
    return b;
}

return 0;
}