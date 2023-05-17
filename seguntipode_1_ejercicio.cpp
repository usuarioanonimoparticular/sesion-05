#include <iostream>
#include <string>

using namespace std;

class base
{
    private:
        int primeratri;
        int segunatri;
        int terceratri;
    public:
        base()
        {
            primeratri = 0;
            segunatri = 0;
            terceratri = 0;
        }
        base( int x, int y, int z)
        {
            primeratri = x;
            segunatri = y;
            terceratri = z;
        }
        void info()
        {
            cout << "Dato entero es: "<< terceratri << endl;
        }
        int setprimeratri()
        {
            cout << "dato entero : "<< primeratri << endl;
        }
};

class subbase : public base
{
    private:
        int cuartatri;

    public:
        subbase(int a, int z) 
        {
            cuartatri = a;
            terceratri = z;
        }
        void info()
        {
            std::cout << "Los datos heredados son: "<< cuartatri << " Y " << terceratri << std::endl;
        }
};


int main()
{
    subbase a(4,2);
    a.info();
    a.setprimeratri(12);
    return 0;
}
