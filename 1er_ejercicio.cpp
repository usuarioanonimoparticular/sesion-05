#include <iostream>
#include <string>

using namespace std;

class base
{
    private:
        string primeratri;
        int segunatri;
    protected:
        int terceratri;
    public:
        base()
        {
            primeratri = "";
            segunatri = 0;
            terceratri = 0;
        }
        base( string x, int y, int z)
        {
            primeratri = x;
            segunatri = y;
            terceratri = z;
        }
        void info()
        {
            cout << "Dato entero es: "<< terceratri << endl;
        }
};

class subbase : public base
{
    private:
        int cuartatri;

    public:
        subbase(int a, int z) : base(z)
        {
            cuartatri = a;
        }
        void info()
        {
            base::info();
            cout << "Los datos heredados son: "<< cuartatri << " Y " << terceratri << endl;
        }
};


int main()
{
    subbase a(4,2);
    a.info();
    return 0;
}
