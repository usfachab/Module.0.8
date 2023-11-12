// #include "MutantStack.hpp"
#include "MutantStack.hpp"
#include "MutantStack.tpp"

int main()
{
    // MutantStack<int> stack;

    // stack.push( 10 );
    // stack.push( 20 );
    // stack.push( 30 );

    // stack.pop();


    // if ( stack.empty() )
    //     std::cout << "empty\n";
    // else
    //     std::cout << "Not empty\n";

    // std::cout << "size: " << stack.size() << std::endl;
    
    // std::cout << "Top: " << stack.top() << std::endl;

    // MutantStack<int>::iterator ita = stack.begin();

    // for( ; ita != stack.end(); ++ita )
    //     std::cout << *ita << std::endl;


    MutantStack<int> mstack;

    mstack.push(5);
    mstack.push(17);

    std::cout << mstack.top() << std::endl;

    mstack.pop();

    std::cout << mstack.size() << std::endl;

    mstack.push(3);
    mstack.push(5);
    mstack.push(737);

    mstack.push(0);

    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();

    ++it;
    --it;

    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }

    std::stack<int> s( mstack );
    return 0;
}
