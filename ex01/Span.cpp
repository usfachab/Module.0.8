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
    for( unsigned int i = 0; i < N; i++ )
        std::cout << container.at( i ) << ", ";
    std::cout << std::endl;
}

int Span::shortestSpan() const
{
    if ( container.size() > 2 )
    {
        int     save    ( 0 );

        for ( size_t i = 1; i < container.size(); i++ )
        {
            if ( std::abs( container.at( i ) ) - std::abs( container.at( i - 1 ) ) <= save )
                save = container.at( i ) - container.at( i - 1 );
        }
        return ( save );
    }
    else
        throw std::exception();
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
        throw std::exception();
}