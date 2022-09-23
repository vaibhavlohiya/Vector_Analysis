#include "V.h"
#include "Elements.h"

template<typename T, uint64_t N, uint64_t M> const uint64_t V<T, N, M>::N_Dimensions() const { return n_dim; }
template<typename T, uint64_t N, uint64_t M> const uint64_t V<T, N, M>::M_Dimensions() const { return m_dim; }

template<typename T, uint64_t N, uint64_t M>
const std::vector<Elements<T, N>>& V<T, N, M>::GetVector(const uint64_t& index) const { return m_Vector.at(index); }

// NOTE: indices starts with 0.
template<typename T, uint64_t N, uint64_t M>              
T& V<T, N, M>::GetValue(const uint64_t& i_index, const uint64_t& j_index) { return m_Vector[i_index][j_index]; }

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
}
