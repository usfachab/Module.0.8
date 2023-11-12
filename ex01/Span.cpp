#include "Span.hpp"

Span::Span() : N ( 0 ) { container.reserve( 0 ); }

Span::Span( unsigned int vecSize ) : N ( vecSize ) { container.reserve( N ); }

Span::Span( const Span& obj ) : N ( obj.N ) { *this = obj; }

Span& Span::operator=( const Span& rhs )
{
    std::vector<int> vec( rhs.container );

    this->container = vec;

    return ( *this );
}

Span::~Span() { container.clear(); }

void Span::addNumber( int value )
{
    if ( container.size() >= N )
        throw std::out_of_range( "Error: out of range" );
    else
    {
        container.push_back( value );
        std::sort( container.begin(), container.end() );
    }
}

void Span::printVec() const
{
    for( unsigned int i = 0; i < container.size(); i++ )
        std::cout << container.at( i ) << ", ";
    std::cout << std::endl;
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
        throw std::out_of_range( "Error: array size" );
}

int Span::longestSpan() const
{
    if ( container.size() > 2 )
    {
        size_t  size    ( container.size() - 1 );
        int     min     ( container.at( 0 ) );
        int     max     ( container.at( size ) );
        
        if ( min < 0 )
            return ( ( min - max ) * -1 );
        else
            return ( max - min );
    }
    else
        throw std::out_of_range( "Error: array size" );
}

void Span::fillContainer()
{
    srand( time( 0 ) );

    // container.resize( N );
    // std::fill( container.begin() + container.size(), container.begin() + container.size() , 0 );

    for ( size_t i = 0; i < N - ( container.size() ); ++i )
    {
        container.push_back( rand() % 100 );
        std::sort( container.begin(), container.end() );
    }

}