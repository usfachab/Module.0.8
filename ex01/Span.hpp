#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <stdexcept>
#include <vector>
#include <algorithm>
#include <cmath>

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
    void fillContainer( std::vector<int>::iterator, std::vector<int>::iterator );
};



#endif