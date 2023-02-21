#include <iostream>

int main() {

    double n1, n2, n3;

    std::cout << "Ingresa el primer numero: " << std::endl;
    std::cin >> n1;

    std::cout << "Ingresa el segundo numero: " << std::endl;
    std::cin >> n2;

    std::cout << "Ingresa el tercer numero: " << std::endl;
    std::cin >> n3;


    if (n1 >= n2) {
        if (n1 >= n3)
           std::cout << "Largest number: " << n1 << std::endl;

        else
            std::cout << "Largest number: " << n3 << std::endl;
    }
    else {
        if (n2 >= n3)
            std::cout << "Largest number: " << n2 << std::endl;
        else
            std::cout << "Largest number: " << n3 << std::endl;
    }

    return 0;
}
