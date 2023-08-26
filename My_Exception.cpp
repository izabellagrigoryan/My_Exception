// My_Exception.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Vector.h"

int main()
{
    Vector<int> m_vec;
    m_vec.init();
    m_vec.print();

    try
    {
        int a = m_vec.at(21);
    }
    catch (My_Exception& msg)
    {
        std::cerr << msg.what();
    }

    return 0;
}
