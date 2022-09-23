// This is a class for each vector elements

#pragma once

#include <vector>

template<typename T, uint64_t N>
class Elements
{
public:

    Elements() // reserve space for number of dimensions.
    {
        e.reserve(N);               
    }

    const int Dimensions() const { return N; }

    inline T& operator[](uint64_t index) // Only for Reading the elements
    {
        return e[index];
    }

    virtual ~Elements() {}

private:
    std::vector<T> e = {};

};
