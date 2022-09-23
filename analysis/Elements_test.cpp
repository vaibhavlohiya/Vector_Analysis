#include <iostream>
#include <vector>

#include "Elements.h"

int main()
{
    Elements<std::string, 3> E;

    E[0] = "hello";
    E[1] = " how";
    E[2] = " are you ?";

    /*E.e.push_back("Hello");
    E.e.push_back("How are ");
    E.e.push_back("you ?");*/

    std::cout << "Dimensions: " << E.Dimensions() << std::endl;

    for (int i = 0; i < 3; i++)
        std::cout << E[i];

    std::cin.get();

}