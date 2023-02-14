#include <iostream>

int main(){
//En el tutorial aparece que ocuparemos namespace para saltarnos la parte del std
//Sin embargo esto esta considerado como una mala práctica por lo que es recomendable no hacerlo
int x;
std::cout << "Ingrese el numero" << std::endl;
std::cin >> x;

std::cout << "Su numero guardado es: " << x << std::endl;
return 0;
}
