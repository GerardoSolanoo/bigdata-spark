#include <iostream>
using namespace std;

int main()
{
    int a = 5, b = 10, temp;

    cout << "Antes del cambio" << endl;
    cout << "a = " << a << "  b = " << b << endl;

    temp = a;
    a = b;
    b = temp;

    cout << "Después del cambio." << endl;
    cout << "a = " << a << ", b = " << b << endl;

    return 0;
}
