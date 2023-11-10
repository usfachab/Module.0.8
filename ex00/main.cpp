#include "easyfind.hpp"

int main(int , char**)
{
    std::array<int, 5> arr;

    arr.fill( 0 );

    try
    {
        arr.at(0) = 1;
        const int idx = easyfind< std::array<int, 5> >( arr, 0 );
        std::cout << "Index: " << idx << std::endl;
        std::cout << "Value: " << arr.at( idx ) << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "Error: no value was found" << '\n';
    }

    std::vector<int> vector;

    vector.push_back( 0 );
    vector.push_back( 1 );
    vector.push_back( 2 );
    vector.push_back( 3 );
    vector.push_back( 4 );

    try
    {
        const int idx = easyfind<std::vector<int> >( vector, 5 );
        std::cout << "Index: " << idx << std::endl;
        std::cout << "Value: " << arr.at( idx ) << std::endl;

    }
    catch(const std::exception& e)
    {
        std::cerr << "Error: no value was found" << '\n';
    }

    return 0;
}
