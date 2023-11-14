#include "Span.hpp"

int main()
{
    Span span( 10 );

    std::vector<int> arr;
    arr.push_back( -9 );
    arr.push_back( 1 );
    arr.push_back( 2 );
    arr.push_back( 3 );
    arr.push_back( 4 );
    arr.push_back( 5 );
    arr.push_back( 6 );
    arr.push_back( 7 );
    arr.push_back( 8 );
    arr.push_back( 9 );
    // arr.push_back( 10 );

    try
    {
        iterator itb = arr.begin();
        iterator ite = arr.end();

        span.fillContainer( itb, ite );

        std::cout << "Shortest distance: " << span.shortestSpan() << std::endl;
        std::cout << "Longest distance: " << span.longestSpan() << std::endl;
        
    }
    catch( const std::exception& e )
    {
        std::cerr << e.what() << std::endl;
    }
    
    return 0;
}