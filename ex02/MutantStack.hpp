#pragma once

#include <iostream>
#include <deque>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
// private:
//     std::deque<T> *_stack;
public:
    // MutantStack();
    // MutantStack( const MutantStack & );
    // MutantStack &operator=( const MutantStack & );
    // ~MutantStack();

    typedef typename std::deque<T>::const_iterator iterator;

    // void push( const T );
    // void pop();
    // bool empty() const;
    // size_t size() const;
    // T& top() const;
    iterator begin() const;
    iterator end() const;
};




// * deque methods : size , = [], front, back, empty, begin, end
// * rbegin, rend, insert, erase, clear, push_back, push_front, pop_back, pop_front


// * stack methods : top, empty, size, push, pop
// * deque methods : front, empty, size, push_front, pop_front
// * deque methods to make stack iterator : begin, end