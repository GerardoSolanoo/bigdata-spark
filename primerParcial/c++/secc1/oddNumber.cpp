#include <iostream>


int main(){
	int n;

	std::cout <<"Ingresa tu numero"<< std::endl;
	std::cin >> n;

	if(n % 2 == 0){
		std::cout << "El numero es par" << std::endl;
	}else{
		std::cout << "El numero es impar" << std::endl;
	}
}
