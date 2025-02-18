#include <iostream>
int main()
{
    char art;
    double precio;
    std::cout << "Ingrese el producto: ";
    std::cin >>art;
    std::cout << "Ingrese el precio del producto: ";
    std::cin >>precio;
    
    std::cout << "El producto "<<art<<" tiene un descuento del 15%, por el precio queda en: "<<precio*0.85<<"$"<< std::endl;
    std::cout << "El ahorro es de: "<<precio*0.15<<"$"<< std::endl;
}
