#include <iostream>
#include <vector>

#include "Elements.h"

int main()
{
    Elements<std::string, 3> E;

    E.e.push_back("Hello");
    E.e.push_back("How are ");
    E.e.push_back("you ?");

    std::cout << E.Dimensions();

    for (int i = 0; i < 3; i++)
        std::cout << "Elements: " << E[i];

    std::cin.get();

}