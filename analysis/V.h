// This is a class to build a vector from N elements.

#pragma once

#include <iostream>
#include <vector>

#include "Elements.h"

// For INPUT stream
template<typename T, uint64_t N>
std::istream& operator>>(std::istream& stream, std::vector<Elements<T, N>>& vec)
{
    Elements<T, N> elements;
    float value;
 
    for (int i = 0; i < N; i++)
    {
        stream >> value;
        elements.e.push_back(value);
    }

    vec.push_back(elements);

    return stream;
}

// For OUTPUT stream
template<typename T, uint64_t N>
std::ostream& operator<<(std::ostream& stream, Elements<T, N>& elements)
{   
    for (uint64_t i = 0; i < N; i++)
    {
        stream << elements[i];
        std::cout << " ";
    }

    return stream;
}

template<typename T, uint64_t N, uint64_t M>
class V  : public Elements<T, N>
{
private:
    static const uint64_t n_dim = N;
    static const uint64_t m_dim = M;
    Elements<T, N> m_elements;
    std::vector<Elements<T, N>> Vector = {};

public:

    V() // reserve space for number of vectors.
    {
        Vector.reserve(M); 
    }

    const uint64_t N_Dimensions() const { return n_dim; }
    const uint64_t M_Dimensions() const { return m_dim; }

    const std::vector<Elements<T, N>>& GetVector(uint64_t& index) const { return Vector.at(index); }

    // NOTE: indices starts with 0.
    T& GetValue(uint64_t i_index, uint64_t j_index) { return Vector[i_index][j_index]; }

    void WriteVector() // Input function
    {
        std::cout << "Write vectors : " << std::endl;
        for (uint64_t i = 0; i < M; i++)
        {   
            std::cin >> Vector;
            std::cout << "\n"; 
        }
    }

    void ReadVectors() // Output functions
    {
        std::cout << "The vectors are given below: " << std::endl;

        for (uint64_t i = 0; i < M; i++)
            std::cout << Vector.at(i) << std::endl;
    }

    

};