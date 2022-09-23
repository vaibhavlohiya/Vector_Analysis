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
public:

    // Constructors
    V() { m_Vector.reserve(M); }                                                        // To get the input of elements from the console.
    V(Elements<T, N> E_USER) : m_elements(E_USER) { m_Vector.reserve(M); }              // To use the user defined elements.
    V(std::vector<Elements<T, N>> V_USER) : m_Vector(V_USER) { m_Vector.reserve(M); }   // To use the user defined vectors.

    // Constant functions 
    const uint64_t N_Dimensions() const;
    const uint64_t M_Dimensions() const;
    const std::vector<Elements<T, N>>& GetVector(const  uint64_t& index) const;

    // Read & Write (I/O) functions

    // NOTE: indices starts with 0.
    T& GetValue(const uint64_t& i_index, const uint64_t& j_index);

    void WriteVector(); // Input function
    void ReadVectors(); // Output functions

private:
    static const uint64_t n_dim = N;
    static const uint64_t m_dim = M;
    Elements<T, N> m_elements;
    std::vector<Elements<T, N>> m_Vector = {};
};

/*template<typename T, uint64_t N, uint64_t M> const uint64_t V<T, N, M>::N_Dimensions() const { return n_dim; }
template<typename T, uint64_t N, uint64_t M> const uint64_t V<T, N, M>::M_Dimensions() const { return m_dim; }

template<typename T, uint64_t N, uint64_t M>
const std::vector<Elements<T, N>>& V<T, N, M>::GetVector(uint64_t& index) const { return m_Vector.at(index); }

// NOTE: indices starts with 0.
template<typename T, uint64_t N, uint64_t M>              
T& V<T, N, M>::GetValue(uint64_t i_index, uint64_t j_index) { return m_Vector[i_index][j_index]; }

// Input function
template<typename T, uint64_t N, uint64_t M>
void V<T, N, M>::WriteVector()                            
{
    std::cout << "Write vectors : " << std::endl;
    for (uint64_t i = 0; i < M; i++)
    {   
        std::cin >> m_Vector;
        std::cout << "\n"; 
    }
}

// Output function
template<typename T, uint64_t N, uint64_t M> 
void V<T, N, M>::ReadVectors() 
{
    std::cout << "The vectors are given below: " << std::endl;

    for (uint64_t i = 0; i < M; i++)
        std::cout << m_Vector.at(i) << std::endl;
}*/





