
#include <iostream>
#include "Declaration.h"

int main()
{
    std::cout << "Ceci est une Mini calculatrice, je vais demander 2 nombres (int) ,\npuis je vais te demander le type d'operation!" <<std::endl;

    std::cout << "Premier nombre: ";
    int PremierNb;
    std::cin >> PremierNb;

    std::cout << "Deuxieme nombre : ";
    int DeuxiemeNb;
    std::cin >> DeuxiemeNb;

    std::cout << "Choisis une operation : +, -, * ou /  : ";
    char Operation;
    std::cin >> Operation;

    switch (Operation) {
    case '+': std::cout << Somme(PremierNb, DeuxiemeNb) << std::endl; break;
    case '/': std::cout << Division(PremierNb, DeuxiemeNb) << std::endl; break;
    case '*': std::cout << Multiplication(PremierNb, DeuxiemeNb) << std::endl; break;
    case '-': std::cout << Soustraction(PremierNb, DeuxiemeNb) << std::endl; break;
    defaut: std::cout << "Erreur dans la saisi !" << std::endl;

    }


}

