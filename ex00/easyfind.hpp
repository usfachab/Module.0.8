#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <vector>
#include <array>

template <typename T>
int easyfind( const T& container, int value )
{
    for ( size_t i = 0; i < container.size(); i++ )
    {
        if ( container[ i ]  == value )
            return  i ;
    }
    throw std::exception();
}

#endif