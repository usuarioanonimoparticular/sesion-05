#iostream <iostream>

using namespace std;

template <typename T>
T minimo(T _a, T _b)
{
    return _a < _b ? _a : _b ;
}

int main ()
{
    int a, b, i;

    cin >> a;
    cin >> b;
    i = minimo <int >(a,b);
    cout << "el minimo es: "<<i << endl;

    float fa, fb, fi;

    cin >> fa;
    cin >> fb;
    fi = minimo <float> (fa,fb);

    cout << "el minimo 2 es: "<<fi << endl;

    return 0;
}