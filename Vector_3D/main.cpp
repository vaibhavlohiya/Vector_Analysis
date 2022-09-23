// Test file for the class V

// The Vector is defined as V<typename, n-dimensions, m-dimensions>

#include <iostream>
#include <vector>

#include "V.h"
#include "V.cpp"
#include "Elements.h"

int main()
{
    //std::vector<Elements<float, 2>> user_Vector;

    //user_Vector.emplace_back(1,2);
    //user_Vector.emplace_back(2,4);

    // Defination of nxm matrix with m rows and n columns;
    V<float, 2, 2> Matrix; 


    // Input stream for the matrix to enter value from the console.
    Matrix.WriteVector();

    std::cout << "x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x" << std::endl;

    // Output stream for the matrix to read on the console.
    Matrix.ReadVectors();

    std::cout << "x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x" << std::endl;

    // N number of dimensions i.e number of columns.
    std::cout << "\n";
    std::cout << "n_Dimensions: " << Matrix.N_Dimensions() << std::endl;

    std::cout << "x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x" << std::endl;

    // M number of dimensions i.e number of rows.
    std::cout << "\n";
    std::cout << "m_Dimensions: " << Matrix.M_Dimensions() << std::endl;

    std::cout << "x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x" << std::endl;

    // Number of dimensions for a single vector .
    std::cout << "\n";
    std::cout << "Dimensions: " << Matrix.Dimensions() << std::endl;

    std::cout << "x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x" << std::endl;

    // Single element
    std::cout << "\n";
    std::cout <<  "V(0)(1): " << Matrix.GetValue(0,1) << std::endl;

    std::cin.get();
}