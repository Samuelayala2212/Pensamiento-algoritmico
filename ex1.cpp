#include <iostream>

int main()
{
    double num1, num2;
    std::cout << "Numero 1: ";
    std::cin >>num1;
    std::cout<< "Numero 2: ";
    std::cin>>num2;
    std::cout<<"La suma de: "<< num1 <<" y "<< num2 << " es: "<< num1+num2 << std::endl;
    std::cout << "La resta de: "<< num1<<" y "<<num2<<" es "<< num1-num2<< std::endl;
    std::cout << "La resta de: "<< num2<<" y "<<num1<<" es "<< num2-num1 << std::endl;
    std::cout << "La multiplicacion de: "<<num1<<" y "<<num2<< " es "<< num1*num2 << std::endl;
    if (num2 !=0) {
        std::cout << "La division de: " <<num1<<" y "<<num2<<" es " << num1 / num2 << std::endl;
    } else { 
        std::cout << "No se puede" << std::endl;
    if(num1 !=0) {
        std::cout << "La division de: "<<num2<<" y "<<num1<<" es "<< num2/num1 << std::endl;
    } else {
        std::cout << "No se puede" << std::endl;
    }
    }
}