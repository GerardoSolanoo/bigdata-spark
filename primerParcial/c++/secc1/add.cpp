#include <iostream>

int main(){
	//Declaramos variables
	int x,y,sum;

	//Preguntamos sobre el valor de (x) y guardamos ese valor
	std::cout << "Ingrese el valor de x: " << std::endl;
	std::cin >> x;

	//Preguntamos sobre el valor de (y) y guardamos ese valor
	std::cout << "Ingrese el valor de y: " << std::endl;
	std::cin >> y;

	//Le decimos que (sum) es el resultado de x+y
	sum = x+y;

	//Imprimimos resultados
	std::cout << "El resultado es: " << sum <<  std::endl;


return 0;
}
