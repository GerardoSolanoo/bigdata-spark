#include <iostream>


int main() {
    int num, originalNum, remainder, result = 0;
    std::cout << "Ingresa un numero positivo de 3 digitos: ";
    std::cin >> num;
    originalNum = num;

    while (originalNum != 0) {
        // remainder contains the last digit
        remainder = originalNum % 10;

        result += remainder * remainder * remainder;

        // removing last digit from the orignal number
        originalNum /= 10;
    }

    if (result == num)
        std::cout << num << " Es un numero Armstrong.";
    else
        std::cout << num << " no Es un numero Armstrong.";

    return 0;
}
