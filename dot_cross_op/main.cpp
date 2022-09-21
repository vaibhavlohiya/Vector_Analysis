// Triple Product of 3 vectors ' a x (b x c) ' and 'a . (b x c)'

// Make this into a single class with functions like dot product, cross product etc.

#include <iostream>
#include <vector>
#include <array>

struct Matrix
{
    float X, Y, Z;

    /*Matrix(float& X, float& Y, float& Z)
        : X(0.0f), Y(0.0f), Z(0.0f)
    {}*/
};

/*std::istream& operator>>(std::istream& stream, Matrix& element)
{
    stream >> element.X >> element.Y >> element.Z;
    return stream;
}*/

std::istream& operator>>(std::istream& stream, std::vector<Matrix>& vec)
{
    Matrix element;
    stream >> element.X >> element.Y >> element.Z;
    vec.push_back(element);

    return stream;
}

std::ostream& operator<<(std::ostream& stream, const Matrix& element)
{
    stream << element.X << ", " << element.Y << ", " << element.Z;
    return stream;
}

/*float Dot_Product(Matrix& element0, Matrix& element1)
{
    return (element0.X)*(element1.X) + (element0.Y)*(element1.Y) + (element0.Z)*(element1.Z);
}*/

Matrix Cross_Product(Matrix& element0, Matrix& element1)
{   
    Matrix Result;
    Result.X = (element0.Y*element1.Z) - (element0.Z*element1.Y);
    Result.Y = (element0.Z*element1.X) - (element0.X*element1.Z);
    Result.Z = (element0.X*element1.Y) - (element0.Y*element1.X);

    return Result;
}

float operator*(const Matrix& element0,const Matrix& element1) // we are using '*' b/w two vectors for dot product. 
{
    return (element0.X)*(element1.X) + (element0.Y)*(element1.Y) + (element0.Z)*(element1.Z);
}

/*Matrix& operator*=(const Matrix& element0,const Matrix& element1) 
{   
    Matrix Result = {};
    Result.X = (element0.Y*element1.Z) - (element0.Z*element1.Y);
    Result.Y = (element0.Z*element1.X) - (element0.X*element1.Z);
    Result.Z = (element0.X*element1.Y) - (element0.Y*element1.X);

    return Result;
}*/

int main()
{
    static const int NO_OF_VECTORS = 3;

    // Making a vector of the struct Matrix
    std::vector<Matrix> element;
    element.reserve(NO_OF_VECTORS);

    std::cout << "Enter the values of vecto respectively: " << std::endl;

    for (int i = 0; i < NO_OF_VECTORS; i++)
    {   
        std::cin >> element;
        std::cout << "\n" << element.at(i) << std::endl;
    }

    // Dot Product
    std::cout << "Dot Product : " << element.at(0)*element.at(1) << std::endl;
    
    // Cross Product
    std::cout << "Cross Product : " << Cross_Product(element.at(0), element.at(1));

    Matrix b_X_c = Cross_Product(element.at(1), element.at(2));

    std::cout << "\n";

    // Scaler Triple Product 
    std::cout << "Scaler Triple Product: " << element.at(0)*b_X_c;

    std::cout << "\n";

    // Vector Triple Product 
    std::cout << "Vector Triple Product: " << Cross_Product(element.at(0), b_X_c);

    std::cin.get();
}

