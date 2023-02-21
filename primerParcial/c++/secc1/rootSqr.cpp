#include <iostream>
#include <cmath>
using namespace std;

int main() {

    float a, b, c, x1, x2, discriminant, realPart, imaginaryPart;
    std::cout << "Ingresa el coeficiente a: "<< "\n";
    std::cin >> a;

    std::cout << "Ingresa el coeficiente b: "<< "\n";
    std::cin >> b;

    std::cout << "Ingresa el coeficiente b: "<< "\n";
    std::cin >> c;
    discriminant = b*b - 4*a*c;

    if (discriminant > 0) {
        x1 = (-b + sqrt(discriminant)) / (2*a);
        x2 = (-b - sqrt(discriminant)) / (2*a);
        std::cout << "Roots are real and different." << endl;
        std::cout << "x1 = " << x1 << endl;
        std::cout << "x2 = " << x2 << endl;
    }

    else if (discriminant == 0) {
        std::cout << "Roots are real and same." << endl;
        x1 = -b/(2*a);
        std::cout << "x1 = x2 =" << x1 << endl;
    }

    else {
        realPart = -b/(2*a);
        imaginaryPart =sqrt(-discriminant)/(2*a);
        std::cout << "Roots are complex and different."  << endl;
        std::cout << "x1 = " << realPart << "+" << imaginaryPart << "i" << endl;
        std::cout << "x2 = " << realPart << "-" << imaginaryPart << "i" << endl;
    }

    return 0;
}
