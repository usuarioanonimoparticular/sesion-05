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




#include <iostream>
#include <string>

using namespace std;

int main () {
    cout << "Inicio" << endl;
    try {
        cout << "Dentro del bloque try" << endl;
        throw("5.5"); // char const*
        // throw(5);  int
        // throw(5.5);  double
        // throw(5.5f);  float
        cout << "NO SALE" << endl;
    }
    catch (int i) {
        cout << "Capturando entero: " << endl;
        cout << i << endl;
    }
    catch (double d) {
        cout << "Capturando double: " << endl;
        cout << d << endl;
    }
    catch (float f) {
        cout << "Capturando float: " << endl;
        cout << f << endl;
    }
    catch (char const* c) {
        cout << "Capturando string: " << endl;
        cout << c << endl;
    }
    cout << "Fin del programa" << endl;
    system("pause");
    system("cls");
    return 0;
}
