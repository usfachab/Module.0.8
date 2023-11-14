/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachaab <yachaab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 13:17:00 by yachaab           #+#    #+#             */
/*   Updated: 2023/11/14 17:17:49 by yachaab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <stdexcept>
#include <vector>
#include <algorithm>

typedef std::vector<int>::iterator iterator;

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

    void printVec() const;
    void addNumber( int );
    int shortestSpan() const;
    int longestSpan() const;
    void fillContainer( iterator, iterator );
};



#endif