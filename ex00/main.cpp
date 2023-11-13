#include "easyfind.hpp"
#include <vector>
#include <array>

int main(int , char**)
{
    std::array<int, 5> arr;

    arr.fill( 0 );

    try
    {
        arr.at(0) = 1;
        const int idx = easyfind< std::array<int, 5> >( arr, 1 );
        std::cout << idx << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "Error: no value was found\n";
    }

    std::vector<int> vector;

    vector.push_back( 0 );
    vector.push_back( 1 );
    vector.push_back( 2 );
    vector.push_back( 3 );
    vector.push_back( 4 );

    try
    {
        const int idx = easyfind< std::vector<int> >( vector, 1 );
        std::cout << idx << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "Error: no value was found" << '\n';
    }

    return 0;
}
