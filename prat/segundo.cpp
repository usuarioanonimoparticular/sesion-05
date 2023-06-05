#include <iostream>

int main ()
{
    int q,w,e, i;

    cout << "ingrese numero: "<<endl;
    cin >> q;
    cout << "ingrese numero: "<<endl;
    cin >> w;
    cout << "ingrese numero: "<<endl;
    cin >> e;

    if (q > w)
    {
        return q;
    }
    else
    {
        return w;
    }
    return 0;
}