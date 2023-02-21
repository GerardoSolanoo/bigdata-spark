#include <iostream>

int main(){
	char c;
	bool isLowerCase, isUpperCase;

	std::cout << "Ingresa una letra: " << std::endl;
	std::cin>>c;

	isLowerCase = (c == 'a'|| c == 'b' || c == 'c' || c  == 'd');
	isUpperCase = (c == 'A' || c == 'B' || c == 'C' || c == 'D');

	if(!isalpha(c)){
		std::cout << "No es una letra del alfabeto" << std::endl;
	}else if(isLowerCase || isUpperCase){
		std::cout << c << "Es una vocal" <<std::endl;
	}else{
		std::cout << c << "Es una consonante" <<std::endl;
	}
return 0;
}
