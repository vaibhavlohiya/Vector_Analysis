#include <iostream>
#include <vector>
#include <array>

struct Matrix
{
    float X, Y, Z;
};

std::istream& operator>>(std::istream& stream, Matrix& element)
{
    stream >> element.X >> element.Y >> element.Z;
    return stream;
}

std::ostream& operator<<(std::ostream& stream, const Matrix& element)
{
    stream << element.X << ", " << element.Y << ", " << element.Z;
    return stream;
}

float Dot_Product(std::array<Matrix, 2>& element)
{
    return (element[0].X)*(element[1].X) + (element[0].Y)*(element[1].Y) + (element[0].Z)*(element[1].Z);
}

Matrix Cross_Product(std::array<Matrix, 2>& element)
{   
    Matrix Result = {};
    Result.X = (element[0].Y*element[1].Z) - (element[0].Z*element[1].Y);
    Result.Y = (element[0].Z*element[1].X) - (element[0].X*element[1].Z);
    Result.Z = (element[0].X*element[1].Y) - (element[0].Y*element[1].X);

    return Result;
}

int main()
{
    // Making an array of the struct Matrix
    std::array<Matrix, 2> element;

    std::cout << "Enter the values of vector 1 and 2 respectively: " << std::endl;
    for (Matrix& e : element)
    {   
        std::cin >> e; 
        std::cout << "\n";
        std::cout << e << std::endl;
    }

    // Dot Product
    std::cout << "Dot Product : " << Dot_Product(element) << std::endl;
    
    // Cross Product
    std::cout << "Cross Product : " << Cross_Product(element) << std::endl;

    std::cin.get();
}

