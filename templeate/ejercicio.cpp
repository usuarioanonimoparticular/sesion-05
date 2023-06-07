#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Vector 
{
    public:
        float  a,b;
        Vector (float a, float b)
        {
            this ->a = a;
            this->b = b;
        }
};

        Vector operator *(Vector a, Vector b)
        {
            return Vector((a*b));
        }

template <class T> T multi( T a, T b)
{
    return a*b;
} 

int main ()
{
    float a,b,i;

    Vector v1 ={1,4};
    Vector v2 = {5,8};

    float  x = 2, y = 7;
    i= multi<float> (a,b);
    cout << "multiplicacion  de cada vector es: "<< i<<endl;

    return 0;
};

int maint ()
{

}