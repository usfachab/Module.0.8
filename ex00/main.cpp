#include "easyfind.hpp"
#include <vector>

int main()
{
    std::vector<int> vector;

    vector.push_back( 0 );
    vector.push_back( 1 );
    vector.push_back( 2 );
    vector.push_back( 3 );
    vector.push_back( 4 );

    try
    {
        const int idx = easyfind< std::vector<int> >( vector, 4 );
        std::cout << idx << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "Error: no value was found" << '\n';
    }

    return 0;
}
