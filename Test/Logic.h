#pragma once

#include <iostream>

class Logic
{
public:

    Logic(double A, double B)
        : m_Number1(A), m_Number2(B)
    {}

    double Add();
    double Subtract(); 
    double Multiply();
    double Divide();
     
private:

    double m_Number1, m_Number2;
};