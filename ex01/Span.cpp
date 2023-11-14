/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachaab <yachaab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 13:16:57 by yachaab           #+#    #+#             */
/*   Updated: 2023/11/14 22:43:18 by yachaab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : N ( 0 ) {}

Span::Span( unsigned int vecSize ) : N ( vecSize )
{
    try
    {
        this->container.reserve( N );
    }
    catch (  const std::exception& e )
    {
        std::cerr << e.what() << std::endl;
    }
}

Span::Span( const Span& obj ) : N ( obj.N ) { *this = obj; }

Span& Span::operator=( const Span& rhs )
{
    try
    {
        this->container.clear();
        this->container.reserve( N );
        this->container = rhs.container;
    }
    catch (  const std::exception& e )
    {
        std::cerr << e.what() << std::endl;
    }
    
    return ( *this );
}

Span::~Span() { container.clear(); }

void Span::addNumber( int value )
{
    try
    {
        if ( container.size() >= N )
            throw std::out_of_range( "Error: addNumber: couldn't add element" );
        else
        {
            container.push_back( value );
            std::sort( container.begin(), container.end() );
        }
    }
    catch (  const std::exception& e )
    {
        std::cerr << e.what() << std::endl;
    }
}

int Span::shortestSpan() const
{
    if ( container.size() > 2 )
    {
        int     save    ( 0 );
        int     diff    ( container.at( 1 ) - container.at( 0 ) );

        for ( size_t i = 1; i < container.size(); i++ )
        {
            save = container.at( i ) - container.at( i - 1 );
            if ( save <= diff )
                diff = save;
        }
        return ( diff );
    }
    else
        throw std::out_of_range( "Error: number of elements should be at least 3" );
}

int Span::longestSpan() const
{
    if ( container.size() > 2 )
    {
        size_t  size    ( container.size() );
        int     min     ( container.at( 0 ) );
        int     max     ( container.at( size - 1 ) );
        
        if ( min < 0 )
            return ( ( min - max ) * -1 );
        else
            return ( max - min );
    }
    else
        throw std::out_of_range( "Error: longestSpan: number of elements should be at least 3" );
}
