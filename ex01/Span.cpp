#include "Span.hpp"

Span::Span() : N ( 0 ) {}

Span::Span( unsigned int vecSize ) : N ( vecSize ) {}

Span::Span( const Span& obj ) : N ( obj.N ) { *this = obj; }

Span& Span::operator=( const Span& rhs )
{
    this->container = rhs.container;

    return ( *this );
}

Span::~Span() { container.clear(); }

void Span::addNumber( int value )
{
    if ( container.size() >= N )
        throw std::out_of_range( "addNumber: out of range" );
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
        size_t  size    ( container.size() );
        int     min     ( container.at( 0 ) );
        int     max     ( container.at( size - 1 ) );
        
        if ( min < 0 )
            return ( ( min - max ) * -1 );
        else
            return ( max - min );
    }
    else
        throw std::out_of_range( "Error: array size" );
}

void Span::fillContainer( iterator begin, iterator end )
{
    try
    {
        while ( begin != end )
        {
            addNumber( *begin );
            begin++;
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}