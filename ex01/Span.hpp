/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachaab <yachaab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 13:17:00 by yachaab           #+#    #+#             */
/*   Updated: 2023/11/14 21:44:28 by yachaab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <stdexcept>
#include <vector>
#include <algorithm>

class Span
{
private:
    unsigned int N;
    std::vector<int> container;
public:
    Span();
    Span( unsigned int vecSize );
    Span( const Span & );
    Span &operator=( const Span & );
    ~Span();

    void addNumber( int );
    int shortestSpan() const;
    int longestSpan() const;
    template <typename C>
    void fillContainer( typename C::iterator& begin, typename C::iterator& end )
    {
        try
        {
            if ( begin >= end )
                throw std::out_of_range( "Please use an leget range iterators" );
            while ( begin != end )
            {
                addNumber( *begin );
                begin++;
            }
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << std::endl;
        }
    }
};

#endif