#iostream <iostream>

using namespace std;

template <tynmae T>
T sum (T a, T b)
{
    return a + b;
}

int main (){
    int rata = sum<int> (2,5);
    cout << rata;

    return 0;
}