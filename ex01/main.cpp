#include "Span.hpp"

int main()
{
    Span span( 100 );

    try
    {
        // srand( time( 0 ) );
        // for( int i = 0; i < 10; i++)
        // {
        //     int value = rand() % 10;
        //     span.addNumber( value );
        // }
        // span.printVec();

        span.addNumber( -10 );
        span.addNumber( -5 );
        span.addNumber( -10 );
        span.addNumber( -3 );

        span.fillContainer();
        // span.printVec();

        std::cout << span.shortestSpan() << std::endl;
        std::cout << span.longestSpan() << std::endl;
        
    }
    catch( const std::exception& e )
    {
        std::cerr << e.what() << std::endl;
    }
    
    return 0;
}