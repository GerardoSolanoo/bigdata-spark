#include <iostream>

int main (){
	int divisor,dividendo,cociente,resto;

	std::cout << "Ingrese el dividendo: " << std::endl;
	std::cin >> dividendo;

	std::cout << "Ingrese el divisor: " << std::endl;
	std::cin >> divisor;

	cociente = dividendo / divisor;
	resto = dividendo % divisor;

	std::cout << "el cociente es de: " << cociente << std::endl;
	std::cout << "el resto es de : " << resto << std::endl;
return 0;
}
