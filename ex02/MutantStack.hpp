#pragma once

#include <iostream>
#include <deque>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
public:
    typedef typename std::deque<T>::iterator iterator;
    iterator begin();
    iterator end();
};




// * deque methods : size , = [], front, back, empty, begin, end
// * rbegin, rend, insert, erase, clear, push_back, push_front, pop_back, pop_front

// * stack methods : top, empty, size, push, pop
// * deque methods : front, empty, size, push_front, pop_front
// * deque methods to make stack iterator : begin, end