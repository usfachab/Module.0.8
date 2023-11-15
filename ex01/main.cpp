/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachaab <yachaab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 13:16:55 by yachaab           #+#    #+#             */
/*   Updated: 2023/11/14 21:49:25 by yachaab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
    try
    {
        Span span(0);
        
        Span span1( 10 );

        span1 = span;
        
        span1.addNumber( 1 );
        span1.addNumber( 2 );
        span1.addNumber( 3 );
    }
    catch (  const std::exception& e )
    {
        std::cerr << e.what() << std::endl;
    }
    
    std::vector<int> arr;
    arr.push_back( -9 );
    arr.push_back( 1 );
    arr.push_back( 2 );
    arr.push_back( 3 );
    arr.push_back( 4 );
    arr.push_back( 5 );
    arr.push_back( 6 );

    try
    {
        Span span( 50 );

        span.addNumber( 7 );
        span.addNumber( 9 );

        std::vector<int>::iterator itb = arr.begin();
        std::vector<int>::iterator ite = arr.end();

        span.fillContainer<std::vector<int> >( itb, ite );

        std::cout << "Shortest distance: " << span.shortestSpan() << std::endl;
        std::cout << "Longest distance: " << span.longestSpan() << std::endl;
        
    }
    catch( const std::exception& e )
    {
        std::cerr << e.what() << std::endl;
    }
    
    return 0;
}