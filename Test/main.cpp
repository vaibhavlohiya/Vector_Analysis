#include <iostream>

#include "Logic.h"

int main()
{
    Logic* l = new Logic(32, 12);

    std::cout << " Addition : " << l->Add() << std::endl;
    std::cout << " Subtraction : " << l->Subtract() << std::endl;
    std::cout << " Multiplication : " << l->Multiply() << std::endl;
    std::cout << " Division : " << l->Divide() << std::endl;

}